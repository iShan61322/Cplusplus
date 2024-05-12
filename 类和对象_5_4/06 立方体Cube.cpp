#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//设计一个立方体类Cube
//属性：长  宽  高  
//行为： 获取立方体的面积和体积
//分别通过全局变量和局内变量判断两个立方体是否一样

class Cube
{
public:
	//行为
	//设置长
	void setL(int L)
	{
		c_L = L;
	}
	//获取长
	int getL()
	{
		return c_L;
	}
	//设置宽
	void setW(int W)
	{
		c_W = W;
	}
	//获取宽
	int getW()
	{
		return c_W;
	}
	//设置高
	void setH(int H)
	{
		c_H = H;
	}
	//获取高
	int getH()
	{
		return c_H;
	}

	//计算立方体表面积
	int CalS()
	{
		return 2 * (c_L * c_W + c_W * c_H + c_L * c_H);
	}

	//计算立方体体积
	int CalV()
	{
		return c_L * c_W * c_H;
	}
	
	//局内判断
	bool isSameByClass(Cube& c)
	{
		if (c.getL() == c_L && c.getW() == c_W && c.getH() == c_L)
		{
			return true;
		}
		return false;
	}
	


	//设置属性
private:
	int c_L;
	int c_W;
	int c_H;
};

//全局函数判断是否为相同立方体
bool isSame(Cube* c1, Cube* c2)
{
	if (c1->getL() == c2->getL() && c1->getW() == c2->getW() && c1->getH() == c2->getH())
	{
		return true;
	}

	return false;
}
/*int main()
{
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	int ret = isSame(&c1, &c2);
	if (ret == true)
	{
		cout << "Same" << endl;
	}
	else 
	{
		cout << "Different" << endl;
	}

	ret = c1.isSameByClass(c2);
	if (ret == true)
	{
		cout << "Class:Same" << endl;
	}
	else
	{
		cout << "Class:Different" << endl;
	}
	system("pause");
	return 0;
}*/