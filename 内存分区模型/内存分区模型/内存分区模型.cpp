#include<iostream>
using namespace std;

//����������ź����Ķ����ƴ��룬�ɲ���ϵͳ���й���
//ȫ���������ȫ�ֱ����;�̬�����Լ�����
//ջ�����ɱ������Զ������ͷţ���ź����Ĳ���ֵ���ֲ�������
//�������ɳ���Ա������ͷţ�������Ա���ͷţ��������ʱ�ɲ���ϵͳ����

//new ����
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
	//���� �������� &����=ԭ��
	//����Ҫ��ʼ���Ҳ��ܸ�
	int a = 1;
	int& b = a;
	b = 2;
	cout << a << endl;
	system("pause");
	return 0;
}