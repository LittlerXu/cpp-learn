#define _CRT_SECURE_NO_WARNINGS 1
#include"circle.h"

//����Բ�ĺͰ뾶
void Circle::setCenter(Point center)
{
	m_Center = center;
}
void Circle::setR(int r)
{
	m_R = r;
}
//��ȡԲ�ĺͰ뾶
Point Circle::getCenter()
{
	return m_Center;
}
int Circle::getR()
{
	return m_R;
}