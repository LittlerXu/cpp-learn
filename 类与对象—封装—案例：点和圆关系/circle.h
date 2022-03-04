#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class Circle
{
private:
	Point m_Center;//在类中可以让另一个类成为本类的成员
	int m_R;

public:
	//设置圆心和半径
	void setCenter(Point center);
	void setR(int r);

	//获取圆心和半径
	Point getCenter();
	int getR();
};