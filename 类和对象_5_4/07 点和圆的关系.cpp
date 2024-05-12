#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//判断点和圆的关系
//设计一个点类
class Point
{
public:
	//设置x
	void setX(int x)
	{
		p_x = x;
	}
	//获取x
	int getX()
	{
		return p_x;
	}
	//设置y
	void setY(int x)
	{
		p_y = x;
	}
	//获取y
	int getY()
	{
		return p_y;
	}
	//属性：x,y坐标
private:
	int p_x;
	int p_y;
};


//设计一个圆类
class Circle
{
	//行为
public:
	//设置半径
	void setR(int r)
	{
		c_r = r;
	}
	//获取半径
	int getR()
	{
		return c_r;
	}
	//设置圆心
	void setCenter(Point center)
	{
		Center = center;
	}
	//获取圆心
	Point getCenter()
	{
		return Center;
	}

	//属性
private:
	Point Center;
	int c_r;
};
//设计一个判断的函数
void isIt(Circle circle, Point point)
{
	//计算半径
	int rdistance = circle.getR() * circle.getR();

	//计算两点之间距离
	int distance = (circle.getCenter().getX() - point.getX()) * (circle.getCenter().getX() - point.getX()) +
		((circle.getCenter().getY() - point.getY()) * (circle.getCenter().getY() - point.getY()));

	//判断
	if (rdistance == distance)
	{
		cout << "点在圆上" << endl;
	}
	else if (rdistance < distance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main()
{
	//创建一个点
	Point point;
	point.setX(10);
	point.setY(10);

	//创建一个圆
	Circle circle;
	circle.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	circle.setCenter(center);

	//判断
	isIt(circle, point);
	system("pause");
	return 0;
}