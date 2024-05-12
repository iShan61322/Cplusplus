#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//封装访问权限
//public      类内可以访问  类外可以访问
//protected   类内可以访问  类外不可以访问   儿子可以访问父亲的保护权限
//private     类内可以访问  类外不可以访问   儿子不可以访问父亲的私有权限

class Rat
{
public:
	//公共权限
	string name;

protected:
	//保护权限
	string food;

private:
	//私有权限
	string bankID;

public:
	void Print()
	{
		name = "牛雨栓";
		food = "小仙牛骚饼";
		bankID = "613222";
	}

};
/*int main()
{
	Rat rat;
	rat.name = "Mywife";
	rat.Print();
	system("pause");
	return 0;
}*/