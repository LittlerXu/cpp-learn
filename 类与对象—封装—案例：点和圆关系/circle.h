#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class Circle
{
private:
	Point m_Center;//�����п�������һ�����Ϊ����ĳ�Ա
	int m_R;

public:
	//����Բ�ĺͰ뾶
	void setCenter(Point center);
	void setR(int r);

	//��ȡԲ�ĺͰ뾶
	Point getCenter();
	int getR();
};