#include <iostream>
using namespace std;
#include "string"
#include"ctime"

//ջ��

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


//����

//int* func()
//{
//	 int* p = new int(10);
//	 return p;
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	delete p;//�ͷ�p
//	int *arr = new int [10];
//	delete[] arr;//�ͷ������[]
//	system("pause");
//	return 0;
//}

//����

////ֵ����
//void myswap1(int a, int c)
//{
//	int temp = a;
//	a = c;
//	c = temp;
//}
////��ַ����
//void myswap(int *a, int *c)
//{
//	int temp = *a;
//	*a = *c;
//	*c = temp;
//}
////���ô���
//void myswap2(int & a, int& c)
//{
//	int temp = a;
//	a = c;
//	c = temp;
//}
//
//void showValue(const int& val)
//{
//	//val = 1000;����,const�����޷���ֵ
//	cout << "val=" << val << endl;
//}
//
//int main()
//{
//	int a = 10;
//	int c = 20;
//	int& b = a;//(int &b=a;)==(int *const b=&a;)
//	//���ñ����ʼ����int&b���������ñ�����ָ�볣������
//	//int& b = c;//�������ó�ʼ�����޷��ٴ�����;
//	//b = 90;//���Ǹ�ֵ
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

//�������

//int func(int a,int  b = 20,int c = 30)//���ĳ����������Ĭ��ֵ����ô����Ĳ�����������Ĭ��ֵ
//{
//	return a + b + c;
//}
//void func1(int=10)//ռλ��������������һ��ֵ��ռλ����������Ĭ�ϲ���
//{
//	cout << "ռλ����" << endl;
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

//��������
//������1��ͬһ����������
//			 2����������ͬ
//			 3�������������Ͳ�ͬ�����߲���������ͬ�����߲���˳��ͬ

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
//	func(a);//int &a=10;�Ƿ�
//	func(3);//const int &a=3;�Ϸ���const int temp=3;int &a=temp;
//	func1(10);
//	system("pause");
//	return 0;
//}