#include<iostream>
using namespace std;

//�β�����
void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

//ռλ����
void func(int a, int)
{
	cout << "ok" << endl;
}


//��������:��������ͬ  �������Ͳ�ͬ������������ͬ������˳��ͬ
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
	swap(a, b);//ʵ��Ҳ�ǲ�����ַ

	const int& ref = 10;//== int tmp=10;  const int & ref = tmp;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	//ռλ����
	func(1, 2);
	system("pause");
	return 0;
}