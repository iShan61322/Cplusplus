#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	//指针
	int a = 0;
	int* p = &a;
	
	cout << "a的地址： " << &a << endl;
	cout << "p的地址： " << p << endl;

	//指针所占地址大小（取决于操作系统大小 32位下为4 64位下为8
	cout << "int*:" << sizeof(int*) << endl;
	cout << "char*:" << sizeof(char*) << endl;
	cout << "float*:" << sizeof(float*) << endl;
	cout << "double*:" << sizeof(double*) << endl;
	system("pause");
	return 0;
}