 //立方体类设计
//1.创建立方体类
//2.设计属性
//3.设计行为，获取立方体表面积和体积
//4.分别利用全局函数和成员函数判断两个立方体是否相等

#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//创建立方体类
class Cube
{

//设计属性：
private:
	int m_Length;
	int m_Width;
	int m_Height;

//设计行为
public:
	//设置长宽高
	void setLength(int length)
	{
		m_Length = length;
	}
	void setWidth(int width)
	{
		m_Width = width;
	}
	void setHeight(int height)
	{
		m_Height = height;
	}
	//获取长宽高
	int getLength()
	{
		return m_Length;
	}
	int getWidth()
	{
		return m_Width;
	}
	int getHeight()
	{
		return m_Height;
	}
    
	//获取立方体表面积和体积
	int calculateS();
	int calculateV();

	//成员函数实现判断两个立方体是否相等
	bool isSameByClass(Cube& c);//成员函数声明

};

//成员函数定义
int Cube::calculateS()
{
	return m_Length * m_Width * m_Height;
}
int Cube::calculateV()
{
	return m_Length * m_Width * m_Height;
}
bool Cube::isSameByClass(Cube& c)
{
	if (m_Length == c.m_Length && m_Width == c.m_Width && m_Height == c.m_Height)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//全局函数实现判断两个立方体是否相等
bool isSame(Cube &c1, Cube &c2)
{
	if (c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth() && c1.getHeight() == c2.getHeight())
	{
		return true;
	}
	else
	{
		return false;
	}
}

//int main()
//{
//	//创建立方体对象
//	Cube c1;
//	c1.setLength(10);
//	c1.setWidth(20);
//	c1.setHeight(30);
//
//	//输出立方体对象的表面积和体积
//	cout << "表面积：" << c1.calculateS() << endl;
//	cout << "体积：" << c1.calculateV() << endl;
//
//	//创建第二个立方体对象
//	Cube c2;
//	c2.setLength(10);
//	c2.setWidth(20);
//	c2.setHeight(30);
//
//	//判断两个立方体是否相等
//	//用成员函数判断
//	bool ret1 = c1.isSameByClass(c2);
//	cout << "用成员函数判断：" << endl;
//	if (ret1 == true)
//	{
//		cout << "两个立方体相等" << endl;
//	}
//	else
//	{
//		cout << "两个立方体不相等" << endl;
//	}
//	//用全局函数判断
//	bool ret2 = isSame(c1, c2);
//	cout << "用全局函数判断：" << endl;
//	if (ret2 == true)
//	{
//		cout << "两个立方体相等" << endl;
//	}
//	else
//	{
//		cout << "两个立方体不相等" << endl;
//	}
//
//	return 0;
//}
