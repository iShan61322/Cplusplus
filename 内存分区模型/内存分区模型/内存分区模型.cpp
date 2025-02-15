#include<iostream>
using namespace std;

//代码区：存放函数的二进制代码，由操作系统进行管理
//全局区：存放全局变量和静态变量以及常量
//栈区：由编译器自动分配释放，存放函数的参数值，局部变量等
//堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收

//new 数组
void test()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;
}
int main()
{
	test();
	//别名 数据类型 &别名=原名
	//必须要初始化且不能改
	int a = 1;
	int& b = a;
	b = 2;
	cout << a << endl;
	system("pause");
	return 0;
}