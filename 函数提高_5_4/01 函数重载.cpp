#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//函数重载
//同一个作用域
//函数名称相同
//函数参数的类型不同 或 顺序不同 或 个数不同

void func()
{
	cout << "1" << endl;
}
void func(int a)
{
	cout << "2" << endl;
}
void func(int a, double b)
{
	cout << "3" << endl;
}
void func(double b, int a)
{
	cout << "4" << endl;
}
//注意： 函数返回值的类型不作为函数重载条件

//int main()
//{
//	func();
//	func(1);
//	func(1,0.1);
//	func(0.1, 1);
//
//	system("pause");
//	return 0;
//}