#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	int m_X;
	int m_Y;

public:
	//设置x、y坐标
	void setX(int x);
	void setY(int y);
	//获取x、y坐标
	int getX();
	int getY();
};