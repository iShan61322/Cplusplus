#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"Swap.h"
int Add(int a, int b);
int main()
{
	//函数
	//加法
	int a = 0;
	int b = 0;
	cout << "Input a:";
	cin >> a;
	cout << "Input b:";
	cin >> b;
	int sum = Add(a, b);
	cout << "sum:" << sum << endl;;

	//交换函数
	int num1 = 10;
	int num2 = 20;
	Swap(num1, num2);
	system("pause");
	return 0;
}
int Add(int a, int b)
{
	return a + b;
}