//#include <iostream>
//using namespace std;
//#include "string"
//#include"ctime"
//#include "Circle.h"
//#include "Point.h"
//#include "Student.h"
//#include "Person.h"
//#include "Cube.h"
//#include <fstream>
//#include "MyArray.hpp"
//
//void isInCircle(Circle& c, Point& p)
//
//{
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	int rDistance = c.getR() * c.getR();
//	if (distance == rDistance)
//	{
//		cout << "����԰��" << endl;
//	}
//	else	if (distance > rDistance)
//	{
//		cout << "����԰��" << endl;
//	}
//	else
//	{
//		cout << "����԰��" << endl;
//	}
//}
//
//void  test1()
//{
//	//Person p1;
//	//Person  p2(10);
//	//Person p3(p2);
//	//Person(10);//��������
//	/*Person p4("����", 20, "С��");
//	cout << p4.getName() << p4.getAge() << p4.getLover() << endl;*/
//	Person p5("����",20,"С��", "С��12");
//	cout << p5.getName() << "\t" << p5.m_Phone.m_PName << endl;
//}
//
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	MyInteger &operator++()
//	{
//		m_Num++;
//		return *this;
//	}
//	MyInteger operator++(int)
//	{
//		MyInteger temp=*this;
//		m_Num++;
// 		return temp;
//	}
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test2()
//{
//	MyInteger myint;
//	cout << ++myint << endl;
//	cout << myint << endl;
// }
//void test3()
//{
//	MyInteger myint;
//	cout <<myint++<< endl;
//	cout <<myint << endl;
//}
//
//class Per
//{
//public:
//	Per(int age) 
//	{
//		m_Age =new int (age);
//	}
//
//	int* m_Age;
//
//	~Per()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age =NULL;
//		}
//	}
//	Per &operator=(Per& p)
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//};
//
//void test4()
//{
//	Per p1(18);
//	Per p2(20);
//	Per p3(30);
//	p3=p1 = p2;
//	cout <<* p1.m_Age << endl;
//	cout << *p2.m_Age << endl;
//	cout << *p3.m_Age << endl;
//}
//
//class Per1
//{
//public:
//	Per1(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	bool operator==(Per1 & p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name) 
//		{
//			return true;
//		}
//		return false;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test5()
//{
//	Per1 p1("Tom", 20);
//	Per1 p2("Tom", 20);
//	if (p1 == p2)
//	{
//		cout << "��2����һ��" << endl;
//	}
//	else
//	{
//		cout << "��2���˲�һ��" << endl;
//	}
//}
//
//
//class MyPrint
//{
//public:
//	int operator()(string test)
//	{
//		cout << test << endl;
//		return 1;
//	}
//};
//
//void test6()
//{
//	MyPrint myPrint;
//	myPrint("�º���");
//	cout << MyPrint()("�����������") << endl;
//}
//
//class Base 
//{
//public:
//	static int m_A;
//	static void func() 
//	{
//		cout << "Base�µľ�̬����" << endl;
//	}
//	static void func(int)
//	{
//		cout << "Base�µ�static void func(int)" << endl;
//	}
//};
//int Base::m_A = 1000;
//class Son :public Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Son�µľ�̬����" << endl;
//	}
//};
//int Son::m_A = 100;
//
//void test7()
//{
//	//1��ͨ������ʽ���ʾ�̬��Ա
//	Son s;
//	cout << "son��m_A:" << s.m_A << endl;
//	cout << "Base��m_A:" << s.Base::m_A << endl;
//	//2��ͨ��������ʽ����
//	cout << "son��m_A:" << Son::m_A << endl;
//	cout << "Base��m_A:" << Son::Base::m_A << endl;
//}
//void test8()
//{
//	//1��ͨ������ʽ���ʾ�̬��Ա
//	Son s1;
//	s1.func();
//	s1.Base::func();
//	//2��ͨ��������ʽ����
//	Son::func();
//	Son::Base::func();
//	Son::Base::func(1);
//}
//
//class animal
//{
//public :
//	int m_Age;
//};
//
//class Sheep :virtual public animal {};
//class Tuo :virtual public animal {};
//
//class SheepTuo :public Sheep, public Tuo {};
//
//void test9()
//{
//	SheepTuo st;
//	st.Sheep::m_Age=18;
//	st.Tuo::m_Age = 20;
//	cout << st.Sheep::m_Age << endl;
//	cout << st.Tuo::m_Age << endl;
//	cout << "st.m_Age:" << st.m_Age << endl;
//
//}
//
//class Animal1 
//{
//public:
//	virtual void speak()/*�麯��ռ4���ֽڣ���Ϊ�������һ��vfptr��virtual function pointer�麯������ָ�룩 ��ָ��
//									vfptrָ��vftable��virtual function table���麯����*/
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat : public Animal1
//{
//public:
//	virtual void speak()//������д���ຯ���Ὣ�̳й������麯��ָ���滻Ϊ�Լ��������麯��ָ�룬�Դ�ɾ�������ĸ�����������
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
////��ַ��󶨣��ڱ���׶ξ�ȷ��������ַ
////�����ִ����è˵������ô���������ַ������󶨣���Ҫ�����н׶ν��а󶨣������ຯ����virtual�ؼ��֣�������Ϊ�麯���������
//void doSpeak(Animal1& animal) 
//{
//	animal.speak();
//}
//
//void test10()
//{
//	Cat cat;
//	doSpeak(cat);
//}
//
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
//
//class AddCalculator :public AbstractCalculator
//{
//public :
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test11()
//{
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "="<<abc->getResult() << endl;
//	delete abc;
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//}
//
//void test12()
//{
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);
//	ofs << "���������ɽ" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺20" << endl;
//	ofs.close();
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) 
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	};
//	//���ļ�4�ַ�ʽ
//	//��һ�֣�
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	};*/
//
//	//�ڶ��֣�
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	//�����֣�
//	string buf;
//	while (getline(ifs,buf))
//	{
//		cout << buf << endl;
//	}
//
//	//�����֣�
//	//char c;
//	//while ((c=ifs.get())!=EOF)//EOF=end of file
//	//{
//	//	cout << c;
//	//}
//
//	ifs.close();
//}
//
////�����ƶ�д�ļ�
//
//
//class Person2 
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void test13()
//{
//	ofstream  ofs;
//	ofs.open("person.txt",ios::out | ios::binary);
//	Person2 p = {"���ɽ",20};
//	ofs.write((const char*)&p, sizeof(Person2));
//	ofs.close();
//	ifstream ifs;
//	ifs.open("person.txt", ios::in | ios::binary);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//	}
//	ifs.read((char*)&p, sizeof(p));
//	cout << "������" << p.m_Name << "\t���䣺" << p.m_Age << endl;
//	ifs.close();
//}
//
//template <class T>
//void mySwap(T& a, T& b) 
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test14()
//{
//	int a = 10;
//	int b = 20;
//	mySwap(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
//template <class  T>
//void func()
//{
//	cout << "ģ����ñ���ȷ����������    <��������>    " << endl;
//}
//
//template <class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i+1; j <len ; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//template <class T>
//void printArr(T& charArr, int len) 
//{
//	for (int  i = 0; i < len; i++)
//	{
//		cout << charArr[i] <<"\t";
//	}
//	cout << endl;
//}
//void test15()
//{
//	char charArr[] = "badcfe";
//	int len = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr, len);
//	printArr(charArr, len);
//}
//
//template <class T>
//int myAdd(T a,T b)//�������ã���Ϊ�޷�ת����������
//{
//	return a + b;
//}
//
//void test16()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout<<myAdd(a, b)<<endl;
//	cout<<myAdd<int>(a,  c)<<endl;
//}
//
//template <class NameType ,class NameAge>
//class Person3
//{
//public:
//	Person3(NameType name,NameAge age) 
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << this->m_Name << this->m_Age << endl;
//	}
//	NameType m_Name;
//	NameAge m_Age;
//};
//
//void test17()
//{
//	Person3<string, int>p1("���ɽ", 20);
//	p1.showPerson();
//}
//
//class Person4
//{
//public:
//	void showPerson4()
//	{
//		cout << "Person4�ĵ���" << endl;
//	}
//};
//
//class Person5
//{
//public:
//	void showPerson5()
//	{
//		cout << "Person5�ĵ���" << endl;
//	}
//};
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//	void fun1() { obj.showPerson4(); }
//	void fun2() { obj.showPerson5(); }
//};
//
//void test18()
//{
//	MyClass<Person5> m;
//	//m.fun1();					//��ģ��ĳ�Ա��������һ��ʼ�ʹ����ģ�ֻ���ڳ�Ա��������ʱ�Żᴴ��
//	m.fun2();
//}
//
////��һ�ַ�ʽ��ָ����������
//
//void printPerson1(Person3 <string, int>&p)
//{
//	p.showPerson();
//}
//
////�ڶ��ַ�ʽ������ģ�廯
//template <class T1, class T2>
//void printPerson2(Person3<T1,T2>&p2)
//{
//	p2.showPerson();
//	cout << "T1���������ͣ�" << typeid(T1).name() << endl;
//	cout << "T2���������ͣ�" << typeid(T2).name() << endl;
//}
//
////�����ַ�ʽ��������ģ�廯
//template<class T>
//void printPerson3(T &p3)
//{
//	p3.showPerson();
//	cout << "T���������ͣ�" << typeid(T).name() << endl;
//}
//void test19()
//{
//	Person3 <string, int>p("�����",100);
//	printPerson1(p);
//	Person3 <string, int>p2("��˽�", 1000);
//	printPerson1(p2);
//	Person3 <string, int>p3("ɳ��", 10000);
//	printPerson1(p3);
//}
//
//template <class T>
//class Base1 
//{
//	T m;
//};
//template <class T1,class T2>
//class Son1:public Base1<T2>
//{
//	T1 obj;
//};
//void test20()
//{
//	Son1<int, char> s1;
//}
//
//void printIntArray(MyArray<int> &arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//void test21()
//{
//	MyArray<int>arr1(5);
//	//MyArray<int>arr2(arr1);
//	//MyArray<int>arr3(50);
//	//arr3 = arr1;
//	for (int i = 0; i < 5; i++)
//	{
//		arr1.Push_Back(i);
//	}
//	cout << "arr1�����Ϊ��" << endl;
//	printIntArray(arr1);
//}
//
////int main()
////{
////	//��Բ�ܳ���
////	
////	//Circle c1;
////	//c1.m_r = 10;
////	//cout << "�ܳ���" << c1.calculateZC() << endl;
////
////	//���ѧ����
////
////	/*Student s1;
////	int a;
////	do
////	{
////		s1.setStudent();
////		s1.showStuent(s1.s_id, s1.s_name);
////		cout << "�㻹�����������1---��ӣ�����0----�����" << endl;
////		cin >> a;
////		while(a>1||a<0)
////			{
////					cout<<"����������������룺"<<endl;
////	                cin>>a;
////					if(a==1||a==0)
////						{
////							break;
////						}
////			}
////	} while (a);*/
////
////	//��˽�л�
////
////	//Person p;
////	//p.setName("���ɽ");
////	//cout << p.getName() << endl;
////	//int age=0;
////	//p.setAge(age);
////	//cout << p.getAge() << endl;
////	//p.setLover("��Ů");  
////	//cout << p.getLover() << endl;
////
////	//����������������
////
////	/*Cube c1;
////	c1.setL(10);
////	c1.setW(10);
////	c1.setH(10);
////	cout << "���Ϊ��" << c1.calculateS() << endl;
////	cout << "���Ϊ��" << c1.calculateV () << endl;*/
////
////	//���԰�Ĺ�ϵ
////
////	/*Circle c;
////	c.setR(10);
////	Point center;
////	center.setX(0);
////	center.setY(0);
////	c.setCenter(center);
////	Point p;
////	p.setX(0);
////	p.setY(9);
////	isInCircle(c, p);*/
////
////	//����ĳ�ʼ��������
////	
////	//test1();
////
////	//���ء�++��
////	
////	/*test2();
////	test3();*/
////
////	//���ء�=��
////	
////	/*test4();*/
////
////	//���ع�ϵ�����
////
////	/*test5();*/
////
////	//���غ���������������ֽзº�����
////
////	/*test6();*/
////
////	//�̳��µ�ͬ����̬��Ա����
////	/*test7();
////	test8();*/
////
////	//��̳У���̳У�virtual��
////
////	/*test9();*/
////
////	//��̬��Ϊ����̬��̬���������أ���ϵ��������أ�����̬��̬
////	//��̬��̬������1���м̳й�ϵ��2��������д������麯������д����������ֵ���ͣ���ʡ�ԣ����������������б���ȫ��ͬ��
////	/*��̬��̬ʹ�ã������ָ������ã�ָ��������󣨸����ຯ����virtual�ؼ��֣�������Ϊ�麯����
////	�����������д��븸�����û�ָ�룬ʵ�����е������ຯ����*/
////	
////	/*test10();*/
////
////	//��̬������������
////
////	/*test11();*/
////
////	// �ı��ļ�ASCII
////	//test12();
////
////	//�����Ʒ�ʽ��д�ļ�
////
////	/*test13();*/
////	
////	//ģ��
////	/*test14();
////	func<int>();*/
////	
////	//ģ������ѡ������	
////	/*test15();*/
////
////	//��ͨ������ģ�庯��������
////	/*test16();*/
////
////	//��ģ��
////	/*test17();*/
////	
////	//��ģ��ĳ�Ա��������һ��ʼ�ʹ����ģ�ֻ���ڳ�Ա��������ʱ�Żᴴ��
////	/*test18();*/
////	
////	//��ģ�������Ϊ��������
////	/*test19();*/
////	
////	//��ģ����̳�
////	/*test20();*/
////
////	//��ģ�尸��
////	test21();
////	system("pause");
////	return 0;
////}
//
