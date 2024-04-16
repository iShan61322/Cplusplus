#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	//三目运算符
	int a = 1;
	int b = 2;
	int max = a > b ? a : b;
	cout << "max= " << max <<endl;

	//switch语句
	int score = 0;
	cout << "Input score: ";
	cin >> score;

	switch (score)
	{
	case 1:cout << "1" << endl; break;
	case 2:cout << "2" << endl; break;
	case 3:cout << "3" << endl; break;
	case 4:cout << "4" << endl; break;
	default:cout << "Wrong" << endl; break;
	}

	//while循环语句
	int num = 0;
	while (num < 10)
	{
		cout << num << endl;
		num++;
	}

	//猜数字
	//生成随机数
	int Ralnum = rand() % 100 + 1;//生成1-100随机数字

	//猜数字
	int val = 0;
	while (val != Ralnum)
	{
		cout << "Guess: ";
		cin >> val;

		if (val > Ralnum)
		{
			cout << "Bigger" << endl;
		}
		else if (val < Ralnum)
		{
			cout << "Smaller" << endl;
		}
		else
		{
			cout << "Congratulations!The num is: " << Ralnum << endl;
		}
	}

	//do while 循环语句
	int num2 = 0;
	do
	{
		cout << num2 << endl;
		num2++;
	} while (num2 < 10);
	system("pause");
	return 0;
}