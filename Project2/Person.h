#pragma once
#include <iostream>

using namespace std;
class Phone
{
public:
	Phone();
	Phone(string pName);

	string m_PName;
};

class Person
{
public:
void setName(string name);
string getName();
void setAge(int& age);
int getAge();
void  setLover(string name);
string getLover();
//Person();
Person(string name, int age, string lover,string pName);
//Person(int a);
//Person(const Person& p);
//~Person();
Phone m_Phone;
private:
	string m_Name;
	int m_Age;
	string m_Lover;
	
};