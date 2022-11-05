#pragma once//��ֹͷ�ļ��ظ�����
#include <iostream>
using namespace std;
#include "string"

template <class T>
class MyArray
{
public:
	MyArray(int capacity)//�вι���
	{
		cout << "�вι��캯������" << endl;
		this->m_CapaCity = capacity;
		this->m_Size = 0;
		this->paddress = new T[this->m_CapaCity];
	};

	MyArray(const MyArray& arr)//��������
	{
		cout << "�������캯������" << endl;
		this->m_CapaCity = arr.m_CapaCity;
		this->m_Size = arr.m_Size;

		//���
		this->paddress = new T[arr.m_CapaCity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	}

	//operator=��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		cout << "operator=��������" << endl;
		//���ж϶����Ƿ������ݣ���������ͷ�
		if (this->paddress!= NULL)
		{
			delete[] this->paddress;
			this->m_CapaCity = 0;
			this->m_Size = 0;
		}
		//���
		this->m_CapaCity = arr.m_CapaCity;
		this->m_Size = arr.m_Size;
		this->paddress = new T[arr.m_CapaCity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
		return *this;
	}

	//β�巨
	void Push_Back(const	T& val)
	{
		if (this->m_CapaCity==this->m_Size)
		{
			return;
		}
		this->paddress[this->m_Size] = val;//������ĩβ��������
		this->m_Size++;//���������С
	}

	//βɾ��
	void Pop_Back()
	{
		if (this.m_Size==0)
		{
			return;
		}
		this->m_Size--;
	}

	//ͨ���±�ķ�ʽ���������е�Ԫ��
	T & operator[](int index)
	{
		return this->paddress[index];
	}

	//�������������
	int getCapacity()
	{
		return this->m_CapaCity;
	}

	//���������С
	int getSize()
	{
		return this->m_Size;
	}
	~MyArray()//��������
	{
		cout << "�������캯������" << endl;
		if (this->paddress!= NULL)
		{
			delete[] this->paddress;
			this->paddress = NULL;
		}
	};

private:
	T* paddress;//ָ��ָ��������ٵ���ʵ����
	int m_CapaCity;//��������
	int m_Size;//�����С

};
