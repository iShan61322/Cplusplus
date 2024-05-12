#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//成员属性设置为私有优点
//1. 可以自己控制读写权限 2. 对于写权限 我们可以检测数据有效性

//编写一个类 属性为私有性
class Rat
{
public:
	//name可读可写
	//设置名字
	void setName(string name)
	{
		r_name = name;
	}
	//读取名字
	void getName()
	{
		cout << "Name:" << r_name << endl;;
	}

	//读取年龄
	void getAge()
	{
		cout << "Age:" << r_age << endl;
	}
	void setAge(int age)
	{
		if (age < 0 || age>120)
		{
			cout << "年龄输入有误" << endl;
			return;
		}
		r_age = age;
	}

	//设置号码
	void setNum(string num)
	{
		r_num = num;
	}
private:
	string r_name;//可读  可写

	int r_age=18;//可读  不可写 -> 可读 可写（大于零岁小于120

	string r_num;//不可读  可写
};
/*int main()
{
	Rat rat;
	rat.setName("牛玉栓");
	rat.getName();
	rat.setAge(20);
	rat.getAge();
	rat.setNum("613222");
	system("pause");
	return 0;
}*/