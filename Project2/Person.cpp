#include "Person.h"

	void Person::setName(string name)
	{
		m_Name = name;
	}
	string Person::getName()
	{
		return m_Name;
	}
	void Person::setAge(int& age)
	{
		cout << "请输入年龄：" << endl;
		cin >> age;
		while (age < 0 || age>100)
		{
			cout << "妖怪哪里跑？吃俺老孙一棒" << endl;
			cout << "再给你个机会好好输入" << endl;
			Person::setAge(age);
			break;
		}
		m_Age = age;
	};
	int Person::getAge()
	{
		cout << "你的年龄为：\t";
		return m_Age;
	};
	void  Person::setLover(string name)
	{
		/*cout << "请输入你的情人：" << endl;
		cin >> name;*/
		m_Lover = name;
	};
	string Person::getLover()
	{
		cout << "你的情人为：\t";
		return m_Lover;
	}

	Phone::Phone(string pName)
	{
		m_PName = pName;
	}
	
	//Person::Person()
	//{
	//	cout << "无参（默认）构造函数" << endl;
	//}

	/*Person::Person(int a)
	{
		cout  << "有参构造函数" << endl;
	}*/
	/*Person::Person(const Person &p)
	{
		m_Age = p.m_Age;
		cout << "拷贝构造函数" << endl;
	}*/
	/*Person::~Person()
	{
		cout << "析构函数" << endl;
	}*/



	Person::Person(string  name, int age, string lover, string pName) :m_Name(name), m_Age(age), m_Lover(lover), m_Phone(pName)//构造函数用法
	{

	}



	
	
