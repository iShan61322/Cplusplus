#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	//输出最重的猪
	int arr[5] = { 300,350,200,400,250 };
	
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i + 1] > arr[i])
		{
			max = arr[i + 1];
			
		}
	}
	cout << "The heavist is: " << max << endl;

	//数组元素逆置
	int a[] = { 1,3,2,5,4 };
	int size = sizeof(a) / sizeof(a[0]);
	int start = 0;
	int end = size - 1;
	while(start<end)
	{
		int tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	//冒泡排序
	int arr1[] = { 3,5,7,4,6,8,9,1,2 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);

	for (int i = 0; i < size1 - 1; i++)
	{
		for (int j = 0; j < size1 - 1 - i; j++)
		{
			if (arr1[j] > arr1[j + 1])
			{
				int tmp = arr1[j];
				arr1[j] = arr1[j+1];
				arr1[j+1] = tmp;
			}
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr1[i] << " ";
	}

	//二维数组
	int arr2[][3] = {	{1,2,3},
						{4,5,6}};

	cout << "二维数组的大小： " << sizeof(arr2) << endl;
	cout << "二维数组第一行的大小： " << sizeof(arr2[0]) << endl;
	cout << "二维数组一个元素的大小： " << sizeof(arr2[0][0]) << endl;

	cout << "二维数组的行数： " << sizeof(arr2) / sizeof(arr2[0]) << endl;
	cout << "二维数组的列数： " << sizeof(arr2[0]) / sizeof(arr2[0][0]) << endl;

	cout << "二维数组的地址：" << arr << endl;
	cout << "二维数组第一行地址：" << &arr[0] << endl;
	cout << "二维数组第二行地址： " << &arr[1] << endl;
	system("pause");
	return 0; 
}