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
		cout << "���������䣺" << endl;
		cin >> age;
		while (age < 0 || age>100)
		{
			cout << "���������ܣ��԰�����һ��" << endl;
			cout << "�ٸ��������ú�����" << endl;
			Person::setAge(age);
			break;
		}
		m_Age = age;
	};
	int Person::getAge()
	{
		cout << "�������Ϊ��\t";
		return m_Age;
	};
	void  Person::setLover(string name)
	{
		/*cout << "������������ˣ�" << endl;
		cin >> name;*/
		m_Lover = name;
	};
	string Person::getLover()
	{
		cout << "�������Ϊ��\t";
		return m_Lover;
	}

	Phone::Phone(string pName)
	{
		m_PName = pName;
	}
	
	//Person::Person()
	//{
	//	cout << "�޲Σ�Ĭ�ϣ����캯��" << endl;
	//}

	/*Person::Person(int a)
	{
		cout  << "�вι��캯��" << endl;
	}*/
	/*Person::Person(const Person &p)
	{
		m_Age = p.m_Age;
		cout << "�������캯��" << endl;
	}*/
	/*Person::~Person()
	{
		cout << "��������" << endl;
	}*/



	Person::Person(string  name, int age, string lover, string pName) :m_Name(name), m_Age(age), m_Lover(lover), m_Phone(pName)//���캯���÷�
	{

	}



	
	
