#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

////�������캯��
//class Student
//{
//private:
//	string m_name;
//	int m_age;
//	float m_score;
//
//public:
//	Student(string name, int age, float score);
//	void show();
//	//�������캯������
//	Student(const Student &stu);
//};
//
//Student::Student(string name, int age, float score):m_name(name), m_age(age), m_score(score){}
//
//void Student::show()
//{
//	cout << m_name << "�������ǣ�" << m_age << "���ɼ���" << m_score << endl;
//}
//
////�������캯������
//Student::Student(const Student &stu)//�������캯����������������
//{
//	m_name = stu.m_name;
//	m_age = stu.m_age;
//	m_score = stu.m_score;
//}
//
//int main()
//{
//	//������ͨ���캯����ʼ������stu1
//	Student stu1("LitterXu", 19, 98.5f);
//	stu1.show();
//
//    //���ÿ������캯����ʼ������stu2
//	Student stu2(stu1);
//	stu2.show();
//
//	return 0;
//}


////��ʼ��const��Ա����
////ģ��ʵ�ֱ䳤����
//class VLA
//{
//private:
//	int m_len;
//	int* m_arr;
//
//public:
//	VLA(int len);
//};
//
//VLA::VLA(int len) :m_len(len)
//{
//	m_arr = new int[m_len];
//}


////���캯����ʼ���б�
//class Student
//{
//private:
//	string m_name;
//	int m_age;
//	float m_score;
//
//public:
//	//�������캯��
//	Student(string name, int age, float score);
//	//������Ա����
//	void show();
//};
//
////���幹�캯��
//Student::Student(string name, int age, float score):m_name(name), m_age(age), m_score(score){}//ʹ�ó�ʼ���б�
////Student::Student(string name, int age, float score)
////{
////	m_name = name;
////	m_age = age;
////	m_score = score;
////}
////�����Ա����
//void Student::show()
//{
//	cout << m_name << "�������ǣ�" << m_age << "���ɼ��ǣ�" << m_score << endl;
//}
//
//int main()
//{
//	//��ջ����������ʱ���캯������
//	Student stu("С��", 18, 98.5f);
//	stu.show();
//
//	//�ڶ�����������ʱ���캯������
//	Student* pstu = new Student("С��", 18, 98.5f);
//	pstu->show();
//
//	return 0;
//}

////���캯��
//class Student
//{
//private:
//	string m_name;
//	int m_age;
//	float m_score;
//
//public:
//	//�������캯��
//	Student(string name, int age, float score);
//	//������Ա����
//	void show();
//};
//
////���幹�캯��
//Student::Student(string name, int age, float score)
//{
//	m_name = name;
//	m_age = age;
//	m_score = score;
//}
////�����Ա����
//void Student::show()
//{
//	cout << m_name << "�������ǣ�" << m_age << "���ɼ��ǣ�" << m_score << endl;
//}
//
//int main()
//{
//	//��ջ����������ʱ���캯������
//	Student stu("С��", 18, 98.5f);
//	stu.show();
//
//	//�ڶ�����������ʱ���캯������
//	Student* pstu = new Student("С��", 18, 98.5f);
//	pstu->show();
//
//	return 0;
//}



////����Ա��������Ϊ˽�У���ͨ��get��set���������Խ��ж�д����
//class Person
//{
//private:
//	string m_Name;
//	int m_Age;
//	string m_Lover;
//
//public:
//	//��������Ϊ�ɶ���д
//	void setName(string name);
//	string getName();
//
//	//��������Ϊ�ɶ���д���޸ģ�
//	int getAge();
//	void setAge(int age);
//
//	//Lover����Ϊ����д
//	void setLover(string name);
//};
//
////��Ա��������
//void Person::setName(string name)
//{
//	m_Name = name;
//}
//string Person::getName()
//{
//	return m_Name;
//}
//
//void Person::setAge(int age)
//{
//	//����д�������Ƿ���Ч
//	if (age < 0 || age > 150)
//	{
//		cout << "�����������!" << endl;
//		m_Age = 0;
//
//	}
//	else
//	{
//		m_Age = age;
//	}
//}
//int Person::getAge()
//{
//	return m_Age;
//}
//
//void Person::setLover(string name)
//{
//	m_Lover = name;
//}
//
//int main()
//{
//	//�����������
//	Person p;
//	p.setName("����");
//	cout << "������" << p.getName() << endl;
//
//	//��������
//	//p.setAge(200);
//	p.setAge(50);
//	cout << "���䣺" << p.getAge() << endl;
//
//	//����Lover
//	p.setLover("����");
//
//	return 0;
//}

////���Ա����Ȩ����ʾ����ѧ����Ϊ��
//class Student
//{
//private://˽�е�
//	string m_Name;
//	int m_Age;
//	float m_Score;
//
//public://���е�
//	void setName(string name);
//	void setAge(int age);
//	void setScore(float score);
//	void show();
//};
//
////��Ա�����Ķ���
//void Student::setName(string name)
//{
//	m_Name = name;
//}
//void Student::setAge(int age)
//{
//	m_Age = age;
//}
//void Student::setScore(float score)
//{
//	m_Score = score;
//}
//void Student::show()
//{
//	cout << m_Name << "�������ǣ�" << m_Age << "���ɼ��ǣ�" << m_Score << endl;
//}
//
//int main()
//{
//	//��ջ�ϴ�������
//	Student stu;
//	stu.setName("�߽�Դ");
//	stu.setAge(20);
//	stu.setScore(98.5f);
//	stu.show();
//
//	//�ڶ��ϴ�������
//	Student* pstu = new Student;
//	pstu->setName("�߽�Դ");
//	pstu->setAge(20);
//	pstu->setScore(98.5f);
//	pstu->show();
//
//	return 0;
//}

//////��Ķ���Ͷ���Ĵ���
////��ѧ����Ϊ��
//class Student
//{
//public://����Ȩ��
//
//	//����(��Ա����)
//	string m_Name;//����
//	int m_Id;     //ѧ��
//
//	//��Ϊ(��Ա����)
//	//��ʾ������ѧ��
//	void showStudent()
//	{
//		cout << "����:" << m_Name << endl;
//		cout << "ѧ��:" << m_Id << endl;
//	}
//}; 
//
//int main()
//{
//	//����һ������ѧ����ʵ��������
//	Student s1;
//
//	//��s1����������Ը�ֵ����
//	s1.m_Name = "����";
//	s1.m_Id = 1;
//
//	//��ʾѧ����Ϣ
//	s1.showStudent();
//
//	system("pause");
//	return 0;
//}


////������������
//int main() {
//
//	int* arr = new int[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//�ͷ����� delete ��� []
//	delete[] arr;
//
//	system("pause");
//
//	return 0;
//}