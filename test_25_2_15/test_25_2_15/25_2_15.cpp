#include<iostream>
using namespace std;

//形参引用
void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

//占位参数
void func(int a, int)
{
	cout << "ok" << endl;
}


//函数重载:函数名相同  参数类型不同，或者数量不同，或者顺序不同
void func1()
{
	cout << "1" << endl;
}

void func1(int a)
{
	cout << "2" << endl;
}
//...
int main()
{
	int a = 1;
	int b = 2;
	swap(a, b);//实际也是操作地址

	const int& ref = 10;//== int tmp=10;  const int & ref = tmp;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	//占位参数
	func(1, 2);
	system("pause");
	return 0;
}