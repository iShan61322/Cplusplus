#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

struct Rat
{
	string name;
	int weight;
	float iq;
};
//结构体嵌套
struct RatVillage
{
	string name;
	int population;
	struct Rat Ratcouple;
};
void Print1(struct Rat Liu)
{
	cout << Liu.name << " " << Liu.weight << " " << Liu.iq << endl;
}

void Print2(struct Rat* p)
{
	cout << "Name:" << p->name << " " << "Weight: " << p->weight << " " << "IQ: " << p->iq << endl;
}
int main()
{
	//结构体
	struct Rat Liu = { "lys",90,100};//创建变量时可以省略struct
	cout << Liu.name << " " << Liu.weight << " " << Liu.iq << endl;

	//结构体数组
	//创建变量
	Rat couple[2] = { {"wife",90,100},
					{"hasband",120,10000} };
	//修改变量
	couple[1].iq = 20000;

	//遍历
	for (int i = 0; i < 2; i++)
	{
		cout << "Name:  " << couple[i].name<<" " << "Weight:  " << couple[i].weight <<" " << "IQ:  " << couple[i].iq<< endl;
	}

	//结构体指针
	Rat Mousegod = { "God",99999,99999 };

	//创建指针
	Rat* p = &Mousegod;

	//输出
	cout << "Name:" << p->name << " " << "Weight: " << p->weight << " " << "IQ: " << p->iq << endl;

	//结构体嵌套
	struct RatVillage n = { "Couple",2,{"couple",100,100} };
	
	//结构体与函数
	Print1(Liu);
	Print2(p);
	system("pause");

	return 0;
}