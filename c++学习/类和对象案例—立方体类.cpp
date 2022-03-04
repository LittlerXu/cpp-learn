 //�����������
//1.������������
//2.�������
//3.�����Ϊ����ȡ���������������
//4.�ֱ�����ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//������������
class Cube
{

//������ԣ�
private:
	int m_Length;
	int m_Width;
	int m_Height;

//�����Ϊ
public:
	//���ó����
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
	//��ȡ�����
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
    
	//��ȡ���������������
	int calculateS();
	int calculateV();

	//��Ա����ʵ���ж������������Ƿ����
	bool isSameByClass(Cube& c);//��Ա��������

};

//��Ա��������
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

//ȫ�ֺ���ʵ���ж������������Ƿ����
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
//	//�������������
//	Cube c1;
//	c1.setLength(10);
//	c1.setWidth(20);
//	c1.setHeight(30);
//
//	//������������ı���������
//	cout << "�������" << c1.calculateS() << endl;
//	cout << "�����" << c1.calculateV() << endl;
//
//	//�����ڶ������������
//	Cube c2;
//	c2.setLength(10);
//	c2.setWidth(20);
//	c2.setHeight(30);
//
//	//�ж������������Ƿ����
//	//�ó�Ա�����ж�
//	bool ret1 = c1.isSameByClass(c2);
//	cout << "�ó�Ա�����жϣ�" << endl;
//	if (ret1 == true)
//	{
//		cout << "�������������" << endl;
//	}
//	else
//	{
//		cout << "���������岻���" << endl;
//	}
//	//��ȫ�ֺ����ж�
//	bool ret2 = isSame(c1, c2);
//	cout << "��ȫ�ֺ����жϣ�" << endl;
//	if (ret2 == true)
//	{
//		cout << "�������������" << endl;
//	}
//	else
//	{
//		cout << "���������岻���" << endl;
//	}
//
//	return 0;
//}
