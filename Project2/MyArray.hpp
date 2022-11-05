#pragma once//防止头文件重复包含
#include <iostream>
using namespace std;
#include "string"

template <class T>
class MyArray
{
public:
	MyArray(int capacity)//有参构造
	{
		cout << "有参构造函数调用" << endl;
		this->m_CapaCity = capacity;
		this->m_Size = 0;
		this->paddress = new T[this->m_CapaCity];
	};

	MyArray(const MyArray& arr)//拷贝函数
	{
		cout << "拷贝构造函数调用" << endl;
		this->m_CapaCity = arr.m_CapaCity;
		this->m_Size = arr.m_Size;

		//深拷贝
		this->paddress = new T[arr.m_CapaCity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	}

	//operator=防止浅拷贝问题
	MyArray& operator=(const MyArray& arr)
	{
		cout << "operator=函数调用" << endl;
		//先判断堆区是否有数据，如果有先释放
		if (this->paddress!= NULL)
		{
			delete[] this->paddress;
			this->m_CapaCity = 0;
			this->m_Size = 0;
		}
		//深拷贝
		this->m_CapaCity = arr.m_CapaCity;
		this->m_Size = arr.m_Size;
		this->paddress = new T[arr.m_CapaCity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
		return *this;
	}

	//尾插法
	void Push_Back(const	T& val)
	{
		if (this->m_CapaCity==this->m_Size)
		{
			return;
		}
		this->paddress[this->m_Size] = val;//在数组末尾插入数据
		this->m_Size++;//更新数组大小
	}

	//尾删法
	void Pop_Back()
	{
		if (this.m_Size==0)
		{
			return;
		}
		this->m_Size--;
	}

	//通过下标的方式访问数组中的元素
	T & operator[](int index)
	{
		return this->paddress[index];
	}

	//返回数组的容量
	int getCapacity()
	{
		return this->m_CapaCity;
	}

	//返回数组大小
	int getSize()
	{
		return this->m_Size;
	}
	~MyArray()//析构函数
	{
		cout << "析构构造函数调用" << endl;
		if (this->paddress!= NULL)
		{
			delete[] this->paddress;
			this->paddress = NULL;
		}
	};

private:
	T* paddress;//指针指向堆区开辟的真实数组
	int m_CapaCity;//数组容量
	int m_Size;//数组大小

};
