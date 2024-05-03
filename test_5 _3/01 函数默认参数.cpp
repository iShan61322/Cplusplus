#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//函数默认参数
//若某个位置有默认参数，则从这位置后都得有默认参数
//函数声明与函数实现只能有一个有默认参数
int Add(int a, int b, int c);
int Add(int a, int b = 10, int c = 20)
{
	return a + b + c;
}
//int main()
//{
//	//函数默认参数
//	cout << Add(5) << endl;
//
//	system("pause");
//	return 0;
//}