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
	//����x��y����
	void setX(int x);
	void setY(int y);
	//��ȡx��y����
	int getX();
	int getY();
};