#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//设计一个类
//圆类 ：访问权限为公共  属性有半径 求周长
const double PI = 3.14;
class Circle
{
	//访问权限
public:

	//属性：半径
	double radius;
	
	//求周长
	double circumference()
	{
		return 2 * PI * radius;
	}
};
/*int main()
{
	//通过类创建对象
	Circle c;
	//对属性进行赋值
	c.radius = 2.0;
	//输出周长
	cout << "圆的周长：" << c.circumference() << endl;
	system("pause");
	return 0;
}*/