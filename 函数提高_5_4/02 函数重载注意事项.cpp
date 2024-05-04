#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//函数重载注意事项

//引用作为重载条件
void func(int& a)
{
	cout << "1" << endl;
}

void func(const int& a)
{
	cout << "2" << endl;
}

//函数重载碰到函数默认参数
void func1(int a, int b)
{
	cout << "3" << endl;
}

void func1(int a, int b = 10)//此时应该避免默认值
{
	cout << "4" << endl;
}
int main()
{
	int a = 10;
	func(a);
	func(1);//const int& a  == int tmp=10; int& a=tmp;

	/*func1(1);
	func1(1,2);*/
	
	system("pause");
	return 0;
}