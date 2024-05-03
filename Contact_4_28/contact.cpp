#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//显示菜单：实现功能选项
void showMenu()
{
	cout << "************************************" << endl;
	cout << "***         1、添加联系人        ***" << endl;
	cout << "***         2、显示联系人        ***" << endl;
	cout << "***         3、删除联系人        ***" << endl;
	cout << "***         4、查找联系人        ***" << endl;
	cout << "***         5、修改联系人        ***" << endl;
	cout << "***         6、清空联系人        ***" << endl;
	cout << "***         0、退出通讯录        ***" << endl;
	cout << "************************************" << endl;
}

//联系人结构体：姓名 性别 年龄 电话 家庭住址
struct Person
{
	string p_Name;
	int p_Sex;
	int p_Age;
	string p_tele;
	string p_addr;
};

#define MAX 1000
//通讯录结构体
struct contact
{
	struct Person p_Array[MAX];
	int con_size;//记录现存的人数
};

//添加联系人
void addPerson(struct contact* con)
{
	if (con->con_size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//添加姓名
		string name;
		cout << "请输入姓名：" ;
		cin >> name;
		con->p_Array[con->con_size].p_Name = name;

		//添加性别
		//1->男 2->女
		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "1->男 2->女" << endl;
		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 2)
			{
				con->p_Array[con->con_size].p_Sex = sex;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入" << endl;
				return;
			}
		}

		//添加年龄
		int age = 0;
		cout << "请输入年龄：" ;
		cin >> age;
		while (true)
		{
			if (age > 0 && age < 120)
			{
				con->p_Array[con->con_size].p_Age = age;
				break;
			}
		}

		//添加电话
		string tele;
		cout << "请输入电话：";
		cin >> tele;
		con->p_Array[con->con_size].p_tele = tele;

		//添加地址
		string addr;
		cout << "请输入地址：";
		cin >> addr;
		con->p_Array[con->con_size].p_addr = addr;

		//每次添加后size+1
		con->con_size++;
		cout << "添加成功！" << endl;

		//清屏
		system("pause");
		system("cls");
	}
}

//显示所有联系人
void showPerson(contact* con)
{
	//先判断通讯录是否为空
	if (con->con_size == 0)
	{
		cout << "通讯录为空" << endl;
		return;
	}
	else
	{
		//遍历数组
		for (int i = 0; i < con->con_size; i++)
		{
			cout << "姓名：" << con->p_Array[i].p_Name << endl;
			cout << "性别：" << con->p_Array[i].p_Sex << endl;
			cout << "年龄：" << con->p_Array[i].p_Age << endl;
			cout << "电话：" << con->p_Array[i].p_tele << endl;
			cout << "住址：" << con->p_Array[i].p_addr << endl;
			cout << endl;
		}

		//打印完清屏
		system("pause");
		system("cls");
	}

}

//查找联系人是否存在
//根据名字查找
int isExited(contact* con, string name)
{
	int i = 0;
	for (i = 0; i < con->con_size; i++)
	{
		if (con->p_Array[i].p_Name == name)
		{
			return i;
		}
		return -1;
	}
}

//删除指定联系人
void delPerson(contact* con)
{
	cout << "请输入要删除的联系人姓名：";
	string name;
	cin >> name;

	
	int ret= isExited(con, name);
	//第一种情况：找到了 返回下标i
	//第二种情况：没找到 返回-1
	if (ret != -1)
	{
		//逻辑：让后面的联系人覆盖前一个
		for (int i = ret; i < con->con_size; i++)
		{
			con->p_Array[i] = con->p_Array[i + 1];
		}
		con->con_size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人.." << endl;
	}
	//清屏
	system("pause");
	system("cls");
}

//查找联系人
void findPerson(contact* con)
{
	cout << "请输入要查找的联系人姓名:";
	string name;
	cin >> name;

	int ret = isExited(con, name);
	//1.找到了 打印
	//2.没找到
	if (ret == -1)
	{
		cout << "查无此人" << endl;
		return;
	}
	else
	{
		cout << "找到了" << endl;
		cout << "姓名：" << con->p_Array[ret].p_Name << endl;
		cout << "性别：" << con->p_Array[ret].p_Sex << endl;
		cout << "年龄：" << con->p_Array[ret].p_Age << endl;
		cout << "电话：" << con->p_Array[ret].p_tele << endl;
		cout << "住址：" << con->p_Array[ret].p_addr << endl;
	}
	//清屏
	system("pause");
	system("cls");
}

//修改指定联系人
void modifyPerson(contact* con)
{
	cout << "请输入要修改的联系人姓名：";
	string name;
	cin >> name;

	int ret = isExited(con, name);

	//找到了 一一修改
	//没找到 提示
	if (ret != -1)
	{
		cout << "请依次修改" << endl;
		cout << "姓名：";
		cin >> con->p_Array[ret].p_Name;
		cout << "性别：";
		cin >> con->p_Array[ret].p_Sex;
		cout << "年龄：";
		cin >> con->p_Array[ret].p_Age;
		cout << "电话：";
		cin >> con->p_Array[ret].p_tele;
		cout << "地址：";
		cin >> con->p_Array[ret].p_addr;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	//清屏
	system("pause");
	system("cls");
}

//清空通讯录
void cleanContact(contact* con)
{
	con->con_size = 0;
	cout << "通讯录已清空" << endl;

	//清屏
	system("pause");
	system("cls");
}
int main()
{
	contact con;
	con.con_size = 0;
	int option = 0;//输入的变量
	while (true)
	{	
		showMenu();
	
		cout << "请选择:>";
		cin >> option;

		switch (option)
		{
		case 1://添加:1.联系人结构体 2.通讯录结构体 3.封装函数
			addPerson(&con);
			break;
		case 2://显示
			showPerson(&con);
			break;
		case 3://删除
			delPerson(&con);
			break;
		case 4://查找
			findPerson(&con);
			break;
		case 5://修改
			modifyPerson(&con);
			break;
		case 6://清空
			cleanContact(&con);
			break;
		case 0://退出
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入错误，请重新输入" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}