#include <iostream>
using namespace std;
#include "string"
#include"ctime"

//栈区

//int* func()
//{
//	int a = 10;
//    return &a;
//}
//int main()
//{
//	int* p =func();
//	cout << *p << endl;
//	
//	system("pause");
//	return 0;
//}


//堆区

//int* func()
//{
//	 int* p = new int(10);
//	 return p;
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	delete p;//释放p
//	int *arr = new int [10];
//	delete[] arr;//释放数组加[]
//	system("pause");
//	return 0;
//}

//引用

////值传递
//void myswap1(int a, int c)
//{
//	int temp = a;
//	a = c;
//	c = temp;
//}
////地址传递
//void myswap(int *a, int *c)
//{
//	int temp = *a;
//	*a = *c;
//	*c = temp;
//}
////引用传递
//void myswap2(int & a, int& c)
//{
//	int temp = a;
//	a = c;
//	c = temp;
//}
//
//void showValue(const int& val)
//{
//	//val = 1000;错误,const修饰无法改值
//	cout << "val=" << val << endl;
//}
//
//int main()
//{
//	int a = 10;
//	int c = 20;
//	int& b = a;//(int &b=a;)==(int *const b=&a;)
//	//引用必须初始化（int&b）错误；引用本质是指针常量例：
//	//int& b = c;//错误，引用初始化后无法再次引用;
//	//b = 90;//这是赋值
//	cout << b << endl;
//	myswap1(a, c);
//	myswap(&a, &c);
//	cout << a << endl;
//	cout << c << endl;
//	myswap2(a, c);
//	cout << a << endl;
//	cout << c << endl;
//	showValue(a);
//	cout << a << endl;
//	system("pause");
//	return 0;
//}

//函数提高

//int func(int a,int  b = 20,int c = 30)//如果某个参数有了默认值，那么后面的参数都必须有默认值
//{
//	return a + b + c;
//}
//void func1(int=10)//占位参数，必须输入一个值；占位参数可以有默认参数
//{
//	cout << "占位参数" << endl;
//}
//int main()
//{
//	func(10);
//	cout << func (10) << endl;//60
//	func(10, 30);
//	cout << func(10, 30) << endl;//70
//	func1(0);
//	system("pause");
//	return 0;
//}

//函数重载
//条件：1、同一个作用域下
//			 2、函数名相同
//			 3、函数参数类型不同，或者参数数量不同，或者参数顺序不同

//void func(int &a)
//{
//	cout << "int &a" << endl;
//}
//void func(const int &a)
//{
//	cout << "const int&a" << endl;
//}
//void func1(int a, int b = 10)
//{
//	cout << "int a, int b = 10" << endl;
//}
//void func1(int a)
//{
//	cout << "int a" << endl;
//}
//int main()
//{
//	int a = 10;
//	func(a);//int &a=10;非法
//	func(3);//const int &a=3;合法；const int temp=3;int &a=temp;
//	func1(10);
//	system("pause");
//	return 0;
//}