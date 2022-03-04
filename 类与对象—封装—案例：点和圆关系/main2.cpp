#define _CRT_SECURE_NO_WARNINGS 1

#include"circle.h"
#include"point.h"
#include <iostream>
using namespace std;

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle& c, Point& p)
{
	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	//����Բ�ĵ���ľ����ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//�жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}

}

int main()
{
	//����һ��Բ
	Circle c;
	c.setR(10);//���ð뾶�ĳ���
	Point center;//����һ���㲢ʹ���ΪԲ��
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//����һ����
	Point p;
	p.setX(10);//�޸�x��y����������´����㲢�жϹ�ϵ
	p.setY(10);

	//���ú����жϵ��Բ�Ĺ�ϵ
	isInCircle(c, p);

	return 0;
}