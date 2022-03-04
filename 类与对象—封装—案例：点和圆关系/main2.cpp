#define _CRT_SECURE_NO_WARNINGS 1

#include"circle.h"
#include"point.h"
#include <iostream>
using namespace std;

//判断点和圆的关系
void isInCircle(Circle& c, Point& p)
{
	//计算半径的平方
	int rDistance = c.getR() * c.getR();
	//计算圆心到点的距离的平方
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
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
	//创建一个圆
	Circle c;
	c.setR(10);//设置半径的长度
	Point center;//创建一个点并使其成为圆心
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//创建一个点
	Point p;
	p.setX(10);//修改x、y坐标可以重新创建点并判断关系
	p.setY(10);

	//调用函数判断点和圆的关系
	isInCircle(c, p);

	return 0;
}