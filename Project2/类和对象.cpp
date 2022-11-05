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
//		cout << "点在园上" << endl;
//	}
//	else	if (distance > rDistance)
//	{
//		cout << "点在园外" << endl;
//	}
//	else
//	{
//		cout << "点在园内" << endl;
//	}
//}
//
//void  test1()
//{
//	//Person p1;
//	//Person  p2(10);
//	//Person p3(p2);
//	//Person(10);//匿名对象
//	/*Person p4("张三", 20, "小红");
//	cout << p4.getName() << p4.getAge() << p4.getLover() << endl;*/
//	Person p5("李四",20,"小红", "小米12");
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
//		cout << "这2个人一样" << endl;
//	}
//	else
//	{
//		cout << "这2个人不一样" << endl;
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
//	myPrint("仿函数");
//	cout << MyPrint()("匿名对象输出") << endl;
//}
//
//class Base 
//{
//public:
//	static int m_A;
//	static void func() 
//	{
//		cout << "Base下的静态函数" << endl;
//	}
//	static void func(int)
//	{
//		cout << "Base下的static void func(int)" << endl;
//	}
//};
//int Base::m_A = 1000;
//class Son :public Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Son下的静态函数" << endl;
//	}
//};
//int Son::m_A = 100;
//
//void test7()
//{
//	//1、通过对象方式访问静态成员
//	Son s;
//	cout << "son的m_A:" << s.m_A << endl;
//	cout << "Base的m_A:" << s.Base::m_A << endl;
//	//2、通过类名方式访问
//	cout << "son的m_A:" << Son::m_A << endl;
//	cout << "Base的m_A:" << Son::Base::m_A << endl;
//}
//void test8()
//{
//	//1、通过对象方式访问静态成员
//	Son s1;
//	s1.func();
//	s1.Base::func();
//	//2、通过类名方式访问
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
//	virtual void speak()/*虚函数占4个字节，因为里面存了一个vfptr（virtual function pointer虚函数（表）指针） 的指针
//									vfptr指向vftable（virtual function table）虚函数表*/
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat : public Animal1
//{
//public:
//	virtual void speak()//子类重写父类函数会将继承过来的虚函数指针替换为自己创建的虚函数指针，以达成具体调用哪个函数的意义
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
////地址早绑定：在编译阶段就确定函数地址
////如果想执行让猫说话，那么这个函数地址不能早绑定，需要在运行阶段进行绑定（给父类函数加virtual关键字，让它成为虚函数），晚绑定
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
//	ofs << "姓名：杨金山" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：20" << endl;
//	ofs.close();
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) 
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	};
//	//读文件4种方式
//	//第一种：
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	};*/
//
//	//第二种：
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	//第三种：
//	string buf;
//	while (getline(ifs,buf))
//	{
//		cout << buf << endl;
//	}
//
//	//第四种：
//	//char c;
//	//while ((c=ifs.get())!=EOF)//EOF=end of file
//	//{
//	//	cout << c;
//	//}
//
//	ifs.close();
//}
//
////二进制读写文件
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
//	Person2 p = {"杨金山",20};
//	ofs.write((const char*)&p, sizeof(Person2));
//	ofs.close();
//	ifstream ifs;
//	ifs.open("person.txt", ios::in | ios::binary);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//	}
//	ifs.read((char*)&p, sizeof(p));
//	cout << "姓名：" << p.m_Name << "\t年龄：" << p.m_Age << endl;
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
//	cout << "模板调用必须确定数据类型    <数据类型>    " << endl;
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
//int myAdd(T a,T b)//不能引用，因为无法转换变量类型
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
//	Person3<string, int>p1("杨金山", 20);
//	p1.showPerson();
//}
//
//class Person4
//{
//public:
//	void showPerson4()
//	{
//		cout << "Person4的调用" << endl;
//	}
//};
//
//class Person5
//{
//public:
//	void showPerson5()
//	{
//		cout << "Person5的调用" << endl;
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
//	//m.fun1();					//类模板的成员函数不是一开始就创建的，只有在成员函数调用时才会创建
//	m.fun2();
//}
//
////第一种方式：指定传入类型
//
//void printPerson1(Person3 <string, int>&p)
//{
//	p.showPerson();
//}
//
////第二种方式：参数模板化
//template <class T1, class T2>
//void printPerson2(Person3<T1,T2>&p2)
//{
//	p2.showPerson();
//	cout << "T1的数据类型：" << typeid(T1).name() << endl;
//	cout << "T2的数据类型：" << typeid(T2).name() << endl;
//}
//
////第三种方式：整个类模板化
//template<class T>
//void printPerson3(T &p3)
//{
//	p3.showPerson();
//	cout << "T的数据类型：" << typeid(T).name() << endl;
//}
//void test19()
//{
//	Person3 <string, int>p("孙悟空",100);
//	printPerson1(p);
//	Person3 <string, int>p2("猪八戒", 1000);
//	printPerson1(p2);
//	Person3 <string, int>p3("沙悟净", 10000);
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
//	cout << "arr1的输出为：" << endl;
//	printIntArray(arr1);
//}
//
////int main()
////{
////	//求圆周长：
////	
////	//Circle c1;
////	//c1.m_r = 10;
////	//cout << "周长：" << c1.calculateZC() << endl;
////
////	//添加学生类
////
////	/*Student s1;
////	int a;
////	do
////	{
////		s1.setStudent();
////		s1.showStuent(s1.s_id, s1.s_name);
////		cout << "你还想添加吗？输入1---添加，输入0----不添加" << endl;
////		cin >> a;
////		while(a>1||a<0)
////			{
////					cout<<"输入错误请重新输入："<<endl;
////	                cin>>a;
////					if(a==1||a==0)
////						{
////							break;
////						}
////			}
////	} while (a);*/
////
////	//类私有化
////
////	//Person p;
////	//p.setName("杨金山");
////	//cout << p.getName() << endl;
////	//int age=0;
////	//p.setAge(age);
////	//cout << p.getAge() << endl;
////	//p.setLover("美女");  
////	//cout << p.getLover() << endl;
////
////	//求立方体面积与体积
////
////	/*Cube c1;
////	c1.setL(10);
////	c1.setW(10);
////	c1.setH(10);
////	cout << "面积为：" << c1.calculateS() << endl;
////	cout << "体积为：" << c1.calculateV () << endl;*/
////
////	//点和园的关系
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
////	//对象的初始化和清理
////	
////	//test1();
////
////	//重载“++”
////	
////	/*test2();
////	test3();*/
////
////	//重载“=”
////	
////	/*test4();*/
////
////	//重载关系运算符
////
////	/*test5();*/
////
////	//重载函数调用运算符（又叫仿函数）
////
////	/*test6();*/
////
////	//继承下的同名静态成员处理
////	/*test7();
////	test8();*/
////
////	//多继承，虚继承（virtual）
////
////	/*test9();*/
////
////	//多态分为：静态多态（函数重载，关系运算符重载），动态多态
////	//动态多态条件：1、有继承关系，2、子类重写父类的虚函数（重写：函数返回值类型（可省略），函数名，参数列表完全相同）
////	/*动态多态使用：父类的指针或引用，指向子类对象（给父类函数加virtual关键字，让它成为虚函数，
////	在其他函数中传入父类引用或指针，实现体中调用子类函数）*/
////	
////	/*test10();*/
////
////	//多态案例：计算器
////
////	/*test11();*/
////
////	// 文本文件ASCII
////	//test12();
////
////	//二进制方式读写文件
////
////	/*test13();*/
////	
////	//模板
////	/*test14();
////	func<int>();*/
////	
////	//模板数组选择排序	
////	/*test15();*/
////
////	//普通函数与模板函数的区别：
////	/*test16();*/
////
////	//类模板
////	/*test17();*/
////	
////	//类模板的成员函数不是一开始就创建的，只有在成员函数调用时才会创建
////	/*test18();*/
////	
////	//类模板对象作为函数参数
////	/*test19();*/
////	
////	//类模板与继承
////	/*test20();*/
////
////	//类模板案例
////	test21();
////	system("pause");
////	return 0;
////}
//
