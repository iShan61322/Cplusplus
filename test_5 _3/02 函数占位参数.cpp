#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//函数占位参数
//占位参数也可以有默认参数
void test(int a, int)
{
	cout << "hello" << endl;
}
int main()
{
	test(1, 2);
	system("pause");
	return 0;
}