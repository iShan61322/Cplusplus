#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//测试函数局部变量返回局部变量地址
int* function()
{
	int a = 10;
	return &a;
}

//利用new在堆区数据 可以返回地址
int* function1()
{
	int* p = new int(10);
	return p;
}

//new 操作符
void func2()
{
	int* p = new int(10);
	cout << *p << endl; 
	cout << *p << endl;

	delete p;
}

//new 创建一个数组
void func3()
{
	int* arr = new int[10];

	//给数组赋值
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}

	//打印
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//销毁  在销毁数组时必须加一个中括号
	delete[]arr;
}

//引用作函数参数
void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int* p = function();
	cout << *p << endl;//第一次能打出正确的值是因为保留了地址
	cout << *p << endl;//乱码

	int* p1 = function1();
	cout << *p1 << endl;
	cout << *p1 << endl;

	func2();
	func3();

	//引用 给变量起别名
	//引用必须初始化
	//引用在初始化后不可以更改
	int a = 10;
	//语法： 数据类型 &别名 = 原名
	int& b = a;

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	b = 100;

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	int a1 = 10;
	int b1 = 20;
	Swap(a1, b1);
	cout << a1 << endl;
	cout << b1 << endl;
	system("pause");
	return 0;
}