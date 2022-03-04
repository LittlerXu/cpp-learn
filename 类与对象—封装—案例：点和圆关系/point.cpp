#define _CRT_SECURE_NO_WARNINGS 1
#include"point.h"

//设置x、y坐标
void Point::setX(int x)
{
	m_X = x;
}
void Point::setY(int y)
{
	m_Y = y;
}
//获取x、y坐标
int Point::getX()
{
	return m_X;
}
int Point::getY()
{
	return m_Y;
}
