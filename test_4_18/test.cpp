#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	//break
	//for
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}

	//continue语句
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;//只打印奇数
		}
		cout << i << endl;
	}

	//goto语句
	cout << "1" << endl;
	cout << "2" << endl;
	goto FLAG;
	cout << "3" << endl;
	cout << "4" << endl;
	FLAG:
	cout << "5" << endl;

	//数组
	int a[] = { 1,2,3,4,5 };
	cout << "整个数组大小： " << sizeof(a) << endl;
	cout << "数组中一个元素大小： " << sizeof(a[0]) << endl;
	cout << "数组有几个元素： " << sizeof(a) / sizeof(a[0]) << endl;

	cout << "数组地址： " << a << endl;
	cout << "数组首元素地址： " << &a[0] << endl;
	cout << "数组第二个元素地址： " << &a[1] << endl;
	system("pause");
	return 0;
}