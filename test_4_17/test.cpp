#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	//水仙花数：1.三位数2.每一位的数的三次方相加等于该三位数
	int num = 100;
	do
	{
		
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if (a* a* a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	//for循环
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	//1-100中若是1.7的倍数  2.个位上是7  3.十位上是7则打印敲桌子，其他打印原数字
	for (int i = 1; i < 100; i++)
	{
		i % 7 == 0 || i % 10 == 7 || i / 10 == 7 ? cout << "敲桌子" << endl : cout << i << endl;
	}

	//for嵌套
	for (int i = 0; i < 10; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	//乘法口诀表
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << j * i << "\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}