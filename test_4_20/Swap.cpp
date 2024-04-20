#define _CRT_SECURE_NO_WARNINGS 1
#include"Swap.h"
void Swap(int num1, int num2)
{
	int tmp = num1;
	num1 = num2;
	num2 = tmp;

	cout << num1 << endl;
	cout << num2 << endl;
}