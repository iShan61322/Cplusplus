#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//设计一个学生类  属性有姓名和学号 可以给姓名和学号赋值  可以显示学生的姓名和学号
class Student
{
	//访问权限
public:

	//属性
	string name;
	string ID;

	//显示函数
	void Print()
	{
		cout << "Name:" << name << endl;
		cout << "ID:" << ID << endl;
	}

};
/*int main()
{
	Student s;
	s.name = "Bob";
	s.ID = "613";

	s.Print();
	system("pause");
	return 0;
}*/