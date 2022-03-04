#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

////拷贝构造函数
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
//	//拷贝构造函数声明
//	Student(const Student &stu);
//};
//
//Student::Student(string name, int age, float score):m_name(name), m_age(age), m_score(score){}
//
//void Student::show()
//{
//	cout << m_name << "的年龄是：" << m_age << "，成绩是" << m_score << endl;
//}
//
////拷贝构造函数定义
//Student::Student(const Student &stu)//拷贝构造函数参数必须是引用
//{
//	m_name = stu.m_name;
//	m_age = stu.m_age;
//	m_score = stu.m_score;
//}
//
//int main()
//{
//	//调用普通构造函数初始化对象stu1
//	Student stu1("LitterXu", 19, 98.5f);
//	stu1.show();
//
//    //调用拷贝构造函数初始化对象stu2
//	Student stu2(stu1);
//	stu2.show();
//
//	return 0;
//}


////初始化const成员变量
////模拟实现变长数组
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


////构造函数初始化列表
//class Student
//{
//private:
//	string m_name;
//	int m_age;
//	float m_score;
//
//public:
//	//声明构造函数
//	Student(string name, int age, float score);
//	//声明成员函数
//	void show();
//};
//
////定义构造函数
//Student::Student(string name, int age, float score):m_name(name), m_age(age), m_score(score){}//使用初始化列表
////Student::Student(string name, int age, float score)
////{
////	m_name = name;
////	m_age = age;
////	m_score = score;
////}
////定义成员函数
//void Student::show()
//{
//	cout << m_name << "的年龄是：" << m_age << "，成绩是：" << m_score << endl;
//}
//
//int main()
//{
//	//在栈区创建对象时向构造函数传参
//	Student stu("小明", 18, 98.5f);
//	stu.show();
//
//	//在堆区创建对象时向构造函数传参
//	Student* pstu = new Student("小明", 18, 98.5f);
//	pstu->show();
//
//	return 0;
//}

////构造函数
//class Student
//{
//private:
//	string m_name;
//	int m_age;
//	float m_score;
//
//public:
//	//声明构造函数
//	Student(string name, int age, float score);
//	//声明成员函数
//	void show();
//};
//
////定义构造函数
//Student::Student(string name, int age, float score)
//{
//	m_name = name;
//	m_age = age;
//	m_score = score;
//}
////定义成员函数
//void Student::show()
//{
//	cout << m_name << "的年龄是：" << m_age << "，成绩是：" << m_score << endl;
//}
//
//int main()
//{
//	//在栈区创建对象时向构造函数传参
//	Student stu("小明", 18, 98.5f);
//	stu.show();
//
//	//在堆区创建对象时向构造函数传参
//	Student* pstu = new Student("小明", 18, 98.5f);
//	pstu->show();
//
//	return 0;
//}



////将成员属性设置为私有，并通过get和set函数对属性进行读写控制
//class Person
//{
//private:
//	string m_Name;
//	int m_Age;
//	string m_Lover;
//
//public:
//	//姓名设置为可读可写
//	void setName(string name);
//	string getName();
//
//	//年龄设置为可读可写（修改）
//	int getAge();
//	void setAge(int age);
//
//	//Lover设置为仅可写
//	void setLover(string name);
//};
//
////成员函数定义
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
//	//检验写入数据是否有效
//	if (age < 0 || age > 150)
//	{
//		cout << "年龄过于离谱!" << endl;
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
//	//设置输出姓名
//	Person p;
//	p.setName("张三");
//	cout << "姓名：" << p.getName() << endl;
//
//	//设置年龄
//	//p.setAge(200);
//	p.setAge(50);
//	cout << "年龄：" << p.getAge() << endl;
//
//	//设置Lover
//	p.setLover("三上");
//
//	return 0;
//}

////类成员访问权限演示：以学生类为例
//class Student
//{
//private://私有的
//	string m_Name;
//	int m_Age;
//	float m_Score;
//
//public://公有的
//	void setName(string name);
//	void setAge(int age);
//	void setScore(float score);
//	void show();
//};
//
////成员函数的定义
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
//	cout << m_Name << "的年龄是：" << m_Age << "，成绩是：" << m_Score << endl;
//}
//
//int main()
//{
//	//在栈上创建对象
//	Student stu;
//	stu.setName("高锦源");
//	stu.setAge(20);
//	stu.setScore(98.5f);
//	stu.show();
//
//	//在堆上创建对象
//	Student* pstu = new Student;
//	pstu->setName("高锦源");
//	pstu->setAge(20);
//	pstu->setScore(98.5f);
//	pstu->show();
//
//	return 0;
//}

//////类的定义和对象的创建
////以学生类为例
//class Student
//{
//public://公共权限
//
//	//属性(成员变量)
//	string m_Name;//姓名
//	int m_Id;     //学号
//
//	//行为(成员函数)
//	//显示姓名和学号
//	void showStudent()
//	{
//		cout << "姓名:" << m_Name << endl;
//		cout << "学号:" << m_Id << endl;
//	}
//}; 
//
//int main()
//{
//	//创建一个具体学生，实例化对象
//	Student s1;
//
//	//给s1对象进行属性赋值操作
//	s1.m_Name = "张三";
//	s1.m_Id = 1;
//
//	//显示学生信息
//	s1.showStudent();
//
//	system("pause");
//	return 0;
//}


////堆区开辟数组
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
//	//释放数组 delete 后加 []
//	delete[] arr;
//
//	system("pause");
//
//	return 0;
//}