#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//引用作函数返回值
int& test1()
{
	//不能返回局部变量引用
	int a = 10;//局部变量
	return a;
}

//函数调用作为左值
int& test2()
{
	//静态变量存放于全局区
	static int a = 20;
	return a;
}

void test3(const int& num)//加上const则不能修改num及其对应的地址的值
{
	cout << num << endl;
}
int main()
{
	//引用作函数返回值
	int& ret1 = test1();

	cout << ret1 << endl;//第一次返回正确值是因为编译器保留
	cout << ret1 << endl;//第二次显示乱码：局部变量存放于栈区，函数调用结束自动销毁

	//全局区变量不会改变
	int& ret2 = test2();
	cout << ret2 << endl;
	cout << ret2 << endl;

	//函数调用作为左值
	test2() = 30;
	cout << ret2 << endl;
	cout << ret2 << endl;

	//常量引用
	//主要用于修饰形参 防止误操作
	const int& ret3 = 10;//加const可以直接赋值  操作系统将代码改成：int tmp=10;int& ret3=tmp;
	//但不可以在修改ret3的值
	test3(5);

	system("pause");
	return 0;
}