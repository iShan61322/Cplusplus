#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
#include<ctime>
//老师学生案例
struct Student
{
	string sName;
	int score;
};
struct Teacher
{
	string tName;
	struct Student sArray[5];
};


//赋值
void AllocateSpace(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDEFGH";
	//给老师结构体赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//给学生结构体赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			//学生成绩随机化
			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}

void PrintInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "tName: " << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\tsName: " << tArray[i].sArray[j].sName 
			 << "    s.score: " << tArray[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//三名老师，一名老师带五名学生
	//创建变量
	Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);

	//赋值
	AllocateSpace(tArray, len);

	//打印
	PrintInfo(tArray, len);
	system("pause");
	return 0;
}