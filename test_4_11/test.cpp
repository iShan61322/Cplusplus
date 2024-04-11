#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	////输入
	//string name = " ";
	//cout << "Input your name: ";
	//cin >> name;
	//cout << "Check name: " << name << endl;

	//int age = 0;
	//cout << "Input your age: ";
	//cin >> age;
	//cout << "Check age: " << age << endl;

	////逻辑非
	//int a = 0;
	//cout << !a << endl;
	//cout << !!a << endl;

	//if单条语句
	int score = 0;
	cout << "Input your score: ";
	cin >> score;
	if (score > 80)
	{
		cout << "Congratulations! You have passed the exam" << endl;
	}
	system("pause");
	return 0;
}