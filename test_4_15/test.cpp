#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	//if多重语句
	int score = 0;
	cout << "Input score: ";
	cin >> score;
	if (score > 720 )
	{
		cout << "Wrone score" << endl;
	}
	else if (score > 600)
	{
		if (score > 700)
		{
			cout << "You are admitted to Tsinghua" << endl;
		}
		else if(score>650)
		{
			cout << "You are admitted to Peking University" << endl;
		}
		else
		{
			cout << "You get the first certifacition" << endl;
		}
	}
	else if(score > 500)
	{
		cout << "You get the second certifacition" << endl;
	}
	else
	{
		cout << "Failed" << endl;
	}


	//三只小猪称体重
	int pigA = 0;
	int pigB = 0;
	int pigC = 0;
	cout << "Input pigA's weight: ";
	cin >> pigA;
	cout << "Input pigB's weight: ";
	cin >> pigB;
	cout << "Input pigC's weight: ";
	cin >> pigC;

	if (pigA > pigB)
	{
		if (pigA > pigC)
		{
			cout << "pigA is the haviest" << endl;
		}
		else
		{
			cout << "pigC is the haviest" << endl;
		}
	}
	if (pigB > pigA)
	{
		if (pigB > pigC)
		{
			cout << "pigB is the haviest" << endl;
		}
		else
		{
			cout << "pigC is the haviest" << endl;
		}
	}
	system("pause");
	return 0;
}