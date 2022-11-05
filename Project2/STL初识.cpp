#include <iostream>
using namespace std;
#include "string"
#include <vector>
#include <algorithm>
#include <deque>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <functional>
#include <numeric>
#include <ctime>

void myPrint(int val)
{
	cout << val << endl;
}

class Person1
{
public:
	Person1(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	bool operator==(const Person1& p)//ʹ��find�㷨Ѱ���Զ�����������ʱ����==
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_Name;
	int m_Age;
};



//vector����

void printVector(vector<int>& v)
{
	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}
void test1()
{
	vector<int>v;
	//β�巨
	v.push_back(10);
	v.push_back(20);
	v.push_back(50);
	v.push_back(60);
	vector<Person1>v2;
	Person1 p1("a", 10);
	Person1 p2("b", 20);
	Person1 p3("c", 30);
	Person1 p4("d", 40);
	Person1 p5("e", 50);
	v2.push_back(p1);
	v2.push_back(p2);
	v2.push_back(p3);
	v2.push_back(p4);
	v2.push_back(p5);
	//ͨ�����������������е�����
	vector<int >::iterator itBegin = v.begin();//��ʼ��������ָ�������еĵ�һ��Ԫ��
	vector<int>::iterator itEnd = v.end();//������������ָ�������е����һ��Ԫ�ص���һ��λ�ã�

	//��һ�ֱ���
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//�ڶ��ֱ���
	/*for (vector<int>::iterator it=v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/

	//�����ֱ���
	//for_each(v.begin(), v.end(), myPrint);

	//�����Զ�����������
	
	//for (vector<Person1>::iterator it=v2.begin();it!=v2.end(); it++)
	//{
	//	cout << (*it).m_Name <<"\t" << (*it).m_Age << endl;
	//	//cout << it->m_Name <<"\t" << it->m_Age << endl;
	//}

	//vectorǶ��vector����

	vector<Person1> v3;
	Person1 p6("aa", 100);
	Person1 p7("bb", 200);
	Person1 p8("cc", 300);
	Person1 p9("dd", 400);
	Person1 p10("ee", 510);
	v3.push_back(p6);
	v3.push_back(p7);
	v3.push_back(p8);
	v3.push_back(p9);
	v3.push_back(p10);

	vector<vector<Person1>> vv;
	vv.push_back(v2);
	vv.push_back(v3);
	for (vector<vector<Person1>>::iterator it= vv.begin(); it!= vv.end(); it++)
	{
		//(*it)��һ��vector����
		for (vector<Person1>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << (*vit).m_Name << "\t" << (*vit).m_Age << endl;
			//cout << vit->m_Name <<"\t" << vit->m_Age << endl;
		}
	}
	if (v.empty())
	{
		cout << "vΪ��" << endl;
	}
	else
	{
		cout << "v��Ϊ��" << endl;
		cout << "v������Ϊ��" << v.capacity() << endl;
		cout << "v�Ĵ�СΪ��" << v.size() << endl;
	}
	v.resize(10,5);//����ָ����С����5��䣨Ĭ��Ϊ0��䣩
	printVector(v);
	
	v.resize(4);//���ָ���ı�С�ˣ��������ֻ�ɾ��
	printVector(v);

	//βɾ��
	v.pop_back();
	printVector(v);
	//����
	v.insert(v.begin(), 100);
	printVector(v);
	v.insert(v.begin(), 2, 500);
	printVector(v);
	//ɾ��
	v.erase(v.begin());
	printVector(v);
	//���
	/*v.erase(v.begin(), v.end());
	printVector(v);
	v.clear();
	printVector(v);*/
	//���ݴ�ȡ
	v.front()=240;
	v.back() = 666;
	v[2] = 888;
	v.at(3) = 999;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "  ";
	}
	cout << endl;

	//���������������swap(vec)
	vector<int>v1;
	//for (int i = 0; i <10; i++)
	//{
	//	v1.push_back(i);
	//}
	//v.swap(v1);
	//printVector(v);
	//printVector(v1);

	v1.reserve(100000);//Ԥ���ռ䣬����������ʱ����ϵͳ�����ڴ�ռ�Ĵ���
	for (int i = 0; i <100000; i++)
	{
		v1.push_back(i);
	}
	v1.resize(5);
	
	//����swap�����ڴ�  
	vector<int>(v1).swap(v1);//vector<int>(v1);��������    vector<int> v(v1)�������캯��
	cout << "v������Ϊ��" << v1.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v1.size() << endl;

}





//string����
void test2()
{
	//string���캯����4�֣���
	string s1;
	const char* str = "hello world";
	string s2(str);
	string s3(s2);
	string s4(10, 'a');

	//string��ֵ��ƴ��
	string s5;
	s5.assign(str,5);
	cout << s5 << endl;
	string s6;
	s6.assign(3, 's');
	cout << s6 << endl;
	s6 += s5;
	cout << s6 << endl;
	//string& append(const string &s,int pos,int n)   ���ַ���s��posλ��,��ȡn���ַ����ӵ��ַ���ĩβ
	s6.append(str, 6, 5);
	cout << s6 << endl;

	//string�������滻
	//find�������Ҳ��ң�rfind���������
	int pos = s6.find("l0l")	;
	if (pos == -1)
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << pos << endl;
	}
	pos = s6.rfind("ll");
	cout << pos << endl;
	s6.replace(0, 1, "aaaa");
	cout << s6 << endl;

	//�ַ����Ƚϣ���������ַ�����ȷ���0��>���� 1 ��<���� -1��
	s1 = "hello world";
	if (s1.compare(str)==0)
	{
		cout << "s1=str" << endl;
	}
	else if (s1.compare(str)>0)
	{
		cout << "s1>str" << endl;
	}
	else
	{
		cout << "s1<str" << endl;
	}
	
	//string�ַ���ȡ
	//1��ͨ�� [ ] ���ʵ����ַ�
	for (int i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << "  ";
	}
	cout << endl;
	//2��ͨ��at��ʽ���ʵ����ַ�
	//for (int i = 0; i < s1.size(); i++)
	//{
	//	cout << s1.at(i) << "  ";
	//}
	//cout << endl;

	//�ַ�������ɾ��
	s1.insert(0, "888");//��0��λ����888
	cout << s1 << endl;
	s1.erase(0,3);//��0��λɾ��3���ַ�
	cout << s1 << endl;

	//string�Ӵ�
	string subStr = s1.substr(0, 5);//��0��λ����ȡ5���ַ���ΪsubStr��ֵ
	cout << subStr << endl;
}



//deque����

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it!=d.end(); it++)
	{
		//*it = 100;
		cout << *it << "  ";
	}
	cout << endl;
}
void test3()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	d1.push_back(20);
	d1.push_front(15);
	//d1.pop_back();
	//d1.pop_front();

	//����		Ĭ���������   ��С���� ����
	//����֧��������ʵĵ���������������������sortֱ�ӽ�������
	printDeque(d1);
	sort(d1.begin(),d1.end());//Ҫʹ��sort�㷨�������<algorithm>
	cout << "�����" << endl;
	printDeque(d1);
}




//stack���� ��ջ���Ƚ����		ջ���������ݣ����������
void test4()
{
	stack<int> stk;
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);
	stk.push(5);
	
	stack<int> stk2;
	stk2 = stk;
	
	if (stk.empty())
	{
		cout << "���Ǹ���ջ" << endl;
	}
	else
	{
		cout << "ջ�У�" << stk.size() << "������" << endl;
	}
	while (!stk2.empty())
	{
		cout <<"stk2ջ������Ϊ��" << stk2.top() << endl;
		stk2.pop();
	}
}




//queue����		���� ���Ƚ��ȳ�����ͷ����β����������ݣ����������
void test5()
{
	queue<int> q1;
	for (int i = 0; i < 5; i++)
	{
		q1.push(i);
	}
	queue<int> q2;
	q2 = q1;
	if (q2.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������е�����Ϊ��" << endl;;
		while (!q2.empty()) 
		{
			 cout<< q2.front() << endl;
			q2.pop();
		}
	}
}





//list����   ��˫��ѭ����������������洢��Ԫ�Ϸ������Ĵ洢�ṹ���߼�˳��ͨ�������ָ��ʵ��
//				 ������һϵ�н�㹹�ɡ������ɣ�1���洢���ݵ�������   2���洢��һ������ָ����
//				�ŵ㣺���ٲ�����ɾ��					ȱ�㣺1�����������ٶ�û������죨��ѯ����2��ռ�ÿռ�������

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it!=L.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

//����
bool myCompare(int v1, int v2)
{
	return v1 > v2;
}

void test6() 
{
	//����
	list<int> L1;
	for (int i = 0; i < 5; i++)
	{
		L1.push_back(i);
	}
	printList(L1);
	list<int>L2(L1.begin(), L1.end());
	list<int>L3(L1);

	//��ֵ
	L2.assign(L1.begin(), L1.end());
	L2.assign(10,66);
	L2.swap(L1);
	printList(L1);
	printList(L2);

	//��С
	L1.resize(15, 88);
	printList(L1);

	//����ɾ��
	L1.insert(++L1.begin(), 250);
	printList(L1);
	L1.erase(++L1.begin());
	printList(L1);
	L1.remove(88);//ɾ�������������루������ͬ��ֵ
	printList(L1);

	//list�������ݴ�ȡ			list������[ ]���������е�Ԫ�أ�Ҳ������at����   ��������֧���������
	//������++��--(˫��)    ����L1.begin()+2
	/*L1.begin()++;
	L1.end()--;*/

	//��ת
	L1.reverse();
	cout << "��ת��" << endl;
	printList(L1);

	//����
	L1.push_back(34);
	//����
	L1.sort();
	printList(L1);
	//����
	L1.sort(myCompare);
	printList(L1);
}





//set/multiset����			����ʽ�������ײ��������set���������ظ�Ԫ�أ�multiset�������ظ�Ԫ��
//pair����
void printSet( set<int>& st)
{
	for (set<int>::iterator it = st.begin(); it!=st.end() ; it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

class MyCompare
{
public:
	bool operator()( int v1, int v2)const//�������const�޶�����
	{
		return v1 > v2;
	}
};

class ComparePerson
{
public:
	 bool operator()(const Person1& p1, const Person1& p2)const
	{
		return p1.m_Age > p2.m_Age;
	}
};

void test7()
{
	set<int> st1;
	for (int i = 0; i < 5; i++)
	{
		st1.insert(i);//����ֻ��insert
	}
	printSet(st1);

	set<int>st2(st1);
	
	//st2.size();//��С
	//st2.empty();//�Ƿ�Ϊ��
	st2.swap(st1);//����

	st2.erase(st2.begin());
	printSet(st2);

	//find()����ҵ�����Ԫ�ط��ص��Ǹ�Ԫ�صĵ���������Ҫ��ָ����ܵõ�ֵ�����û�ҵ����᷵��end������
	if (st2.find(2)!=st2.end())
	{
		cout << "�ҵ�Ԫ�أ�" << *st2.find(2) << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//count()�᷵�ز�ѯ��Ԫ�ظ���������set�޷��洢�ظ�Ԫ�أ�����set.count()ֻ�ܷ��� 0 �� 1��
	cout << "st2����" << st2.count(2) << "��2" << endl;

	//set.insert(),��һ��second��������������bool���͵�ֵ������ɹ�ʱ����1��ʧ��ʱ����0
	pair<set<int>::iterator, bool> ret = st2.insert(10);
	if (ret.second)
	{
		cout << "����ɹ�" << endl;
	}
	else
	{
		cout << "����ʧ��" << endl;
	}
	ret=st2.insert(10);
	if (ret.second)
	{
		cout << "����ɹ�" << endl;
	}
	else
	{
		cout << "����ʧ��" << endl;
	}

	//����Ĵ���
	pair<string, int> p("���ɽ", 20);
	cout << "������" << p.first << "\t���䣺" << p.second << endl;
	pair<string, int> p2=make_pair("�¼�ΰ", 20);
	cout << "������" << p2.first << "\t���䣺" << p2.second << endl;

	//���÷º����ı�����˳��
	set<int, MyCompare>st3;//��Ϊset<int,MyCompare>���MyCompare��const���󣨾�̬��Ա������
											//������Ҫ�����Ǵ�����MyCompare(�Ǿ�̬��Ա����)������const����������Ϊ��̬��Ա����
	for (int i = 0; i < 5; i++)
	{
		st3.insert(i);//����ֻ��insert
	}
	for (set<int,MyCompare>::iterator it = st3.begin(); it!=st3.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;

	//set����Զ�����������
	set<Person1, ComparePerson> st4;
	Person1 p21("����", 28);
	Person1 p1("����", 30);
	Person1 p3("�ŷ�", 26);
	Person1 p4("����", 22);
	st4.insert(p1);
	st4.insert(p21);
	st4.insert(p3);
	st4.insert(p4);
	for (set<Person1,ComparePerson>::iterator it = st4.begin(); it!=st4.end(); it++)
	{
		cout <<"������" << it->m_Name << "���䣺"<<it->m_Age<<endl;
	}
}





//map���� map������Ԫ�ض���pair
void printMap(map<int ,int> &m)
{
	for (map<int,int>::iterator it = m.begin(); it!=m.end(); it++)
	{
		cout << "key:" << (*it).first << "\tvalue:" << (*it).second << endl;
	}
	cout << endl;
}


void test8()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(5, 50));
	printMap(m);

	//����
	//��һ��
	m.insert(pair<int, int>(6, 60));
	//�ڶ���
	m.insert(make_pair(7, 70));
	//������
	m.insert(map<int, int>::value_type(8, 80));
	//������
	m[9] = 90;//�����������ַ�ʽ���룬���������ַ�ʽ����key��Ӧ��value

	//����
	m.find(8);//m.find(8)���ص�����;
	map<int, int >::iterator pos = m.find(5);
	if (pos != m.end())
	{
		cout << "�鵽��Ԫ��key:" << (*pos).first << "\t����value=" << (*pos).second << endl;
	}
	else
	{
		cout << "û�ҵ�Ԫ��" << endl;
	}
	
	//����
	map<int, int, MyCompare>m2;
	m2.insert(pair<int, int>(1, 10));
	m2.insert(pair<int, int>(2, 20));
	m2.insert(pair<int, int>(3, 30));
	m2.insert(pair<int, int>(4, 40));
	m2.insert(pair<int, int>(5, 50));
	for (map<int,int, MyCompare>::iterator it = m2.begin(); it != m2.end(); it++)
	{
		cout << "key:" << (*it).first << "\tvalue:" << (*it).second << endl;
	}
	cout << endl;
}





//ν�ʣ� �º�����bool���͵�

class GreatFive
{
public:
	bool operator()(int val)//һԪν��(һ������)
	{
		return val > 5;
	}
};
void test9()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it=find_if(v.begin(), v.end(), GreatFive());
	if (it==v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�>5��Ԫ��Ϊ��" << *it << endl;
	}

	//��Ԫν��
	sort(v.begin(), v.end(), MyCompare());//MyCompare��Ԫν��
	printVector(v);
}





//�ڽ���������plus �ӷ���minus ������multiplies �˷���divides ������modulus ȡģ�������º���
//��equal_to  ���ڣ�not_equal_to �����ڣ�greater ���ڣ�greater_equal ���ڵ��ڣ�less С�ڣ�less_equal С�ڵ��ڣ���ϵ�º���
// ��logical_and �߼��룬logical_or �߼���logical_not �߼��ǣ��߼��º���
void test10()
{
	//negate һԪ�º��� ȡ���º���
	negate<int> n;
	cout << n(30) << endl;//-30

	//plus ��Ԫ�º��� �ӷ�
	plus<int>p;
	cout << p(10, 20) << endl;//30

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	sort(v.begin(), v.end(), greater<int>());//��������
	printVector(v);

	vector<bool> v1;
	v1.push_back(true);
	v1.push_back(false);
	v1.push_back(true);
	v1.push_back(false);
	for (vector<bool>::iterator it = v1.begin(); it!=v1.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;

	//�����߼��ǣ�������v1���˵�v2�У���ִ��ȡ������
	vector<bool> v2;
	v2.resize(v1.size());
	transform(v1.begin(), v1.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}






//�㷨
void print01(int val)
{
	cout << val << "  ";
};
class Print02
{
public:
	void operator()(int val)
	{
		cout << val << "  ";
	}
};
class Print03
{
public:
	int operator()(int val)
	{
		return val;
	}
};
void test11()
{
	//for_each
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v. begin(), v.end(), print01);//��ͨ����
	cout << endl;
	for_each(v.begin(), v.end(), Print02());//�º���
	cout << endl;

	//transform�㷨
	vector<int> v2;
	v2.resize(v.size());//������ǰ���ٿռ�
	transform(v.begin(), v.end(), v2.begin(), Print03());//Print03��������������������Խ�����������
	for_each(v2.begin(), v2.end(), Print02());
	cout << endl;

	//find�㷨(�����Զ�����������ʱ��Ҫ����==)
	vector<int>::iterator it = find(v.begin(), v.end(), 4);
	if (it == v.end())
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}
	else
	{
		cout << "�ҵ�Ԫ�أ�" << *it << endl;
	}

	vector<Person1>v3;
	Person1 p1("a", 10);
	Person1 p2("b", 20);
	Person1 p3("c", 30);
	Person1 p4("d", 40);
	Person1 p5("e", 50);
	v3.push_back(p1);
	v3.push_back(p2);
	v3.push_back(p3);
	v3.push_back(p4);
	v3.push_back(p5);
	vector<Person1>::iterator it1 = find(v3.begin(), v3.end(), p3);//�Զ������Ͳ���
	if (it1 == v3.end())
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}
	else
	{
		cout << "�ҵ�Ԫ�أ�" <<"������" << (*it1).m_Name<< "\t���䣺"<<(*it1).m_Age << endl;
	}

	//find_if�㷨��ͳ���Զ�������������Ҫ��д�º������߱�������ʲô����ͳ�ƣ�
	vector<int>::iterator it2 = find_if(v.begin(), v.end(), GreatFive());
	if (it2 == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�>5��Ԫ��Ϊ��" << *it2 << endl;
	}

	//adjacent_find�㷨�����������ظ�Ԫ�أ�
	//v.push_back(9);
	vector<int>::iterator pos=adjacent_find(v.begin(), v.end());
	if (pos == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ������ظ�Ԫ��Ϊ��" << *pos<< endl;
	}

	//binary_serch�㷨������ָ��Ԫ���Ƿ���ڣ����ֲ鷨
	//ע�⣺���������������Ժ�������ֻ�ж����ҵ�Ԫ�ص�ǰ��Ԫ���Ƿ����������в��ҡ�
	//����
	//v.push_back(2);//���һ��2�󣬾��Ҳ���Ԫ��9��,��ȴ���ҵ�9֮ǰ��������
	printVector(v);
	bool ret = binary_search(v.begin(), v.end(), 8);
	if (ret)
	{
		cout << "�ҵ�Ԫ��" << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//count�㷨��ͳ�Ʋ���Ԫ�ظ�����ͳ���Զ�������������Ҫ����==
	cout << "2�ĸ���Ϊ��" << count(v.begin(), v.end(), 2) << endl;
	cout << "p1�ĸ���Ϊ��" << count(v3.begin(), v3.end(), p1) << endl;

	//count_if�㷨��������ͳ��Ԫ�ظ�����ͳ���Զ�������������Ҫ��д�º������߱�������ʲô����ͳ��
	printVector(v);
	cout << "����5��Ԫ�ظ���Ϊ��" << count_if(v.begin(), v.end(), GreatFive()) << endl;

	//sort�㷨������
	sort(v.begin(), v.end(), greater<int>());
	printVector(v);

	//random_shuffle�㷨���������е�Ԫ��������У�
	srand((unsigned int)time(NULL));
	random_shuffle(v.begin(),v.end());
	printVector(v);

	//merge�㷨�������������ϲ���������һ���µ������У�
	vector<int> v4;
	v4.resize(v.size() + v2.size());
	sort(v.begin(), v.end());//ԭ������������
	merge(v.begin(), v.end(), v2.begin(), v2.end(), v4.begin());
	printVector(v4);
	
	//reverse�㷨����ת����Ԫ�أ�
	reverse(v4.begin(), v4.end());
	printVector(v4);

	//copy�㷨��������
	vector<int>v5;
	v5.resize(v4.size());
	copy(v4.begin(), v4.end(), v5.begin());
	printVector(v5);

	//replace�㷨���滻��
	replace(v5.begin(), v5.end(), 9, 19);
	printVector(v5);

	//replace_if���������滻��������ν��
	replace_if(v5.begin(), v5.end(), GreatFive(), 666);
	printVector(v5);

	//swap�㷨���������������е�Ԫ�أ�ע�⣺1��ͬһ����������2���������С����Ҳ��ı�
	swap(v4, v5);
	printVector(v4);
	printVector(v5);

	//accumulate�㷨����������Ԫ���ۼ��ܺͣ�
	cout<<accumulate(v5.begin(),v5.end(),10)<<endl;//  "10"��Ҫ��һ����ʼֵ

	//fill�㷨�������������ָ����Ԫ�أ��������Ԫ�أ����֮ǰ��Ԫ��ȫ���滻
	 fill(v5.begin(), v5.end(), 100);//��100������ֵ
	 printVector(v5);

	 //set_intersection�㷨�������������Ľ����������������е��ظ�Ԫ�أ�
	 vector<int>v6;
	 vector<int>v7;
	 for (int i = 0; i < 10; i++)
	 {
		 v7.push_back(i + 5);
	 }
	 v6.resize(min(v.size(),v7.size()));
	//����Ŀ�����������һ��Ԫ�صĵ�����
	vector<int>::iterator itEnd= set_intersection(v.begin(), v.end(), v7.begin(), v7.end(), v6.begin());
	 for_each(v6.begin(), itEnd, print01);//��Ȼ����������0�������λ��
	 cout << endl;

	 //set_union�㷨�������������Ĳ��������ϲ�ȥ�ظ���
	 vector<int>v8;
	 v8.resize(v.size() + v7.size());
	 vector<int>::iterator itEnd1 = set_union(v.begin(), v.end(), v7.begin(), v7.end(), v8.begin());
	 for_each(v8.begin(), itEnd1, print01);
	 cout << endl;

	 //set_difference�㷨�������������Ĳ����ǰһ�������ͺ�һ��������Ȳ��ظ���Ԫ�أ�
	 vector<int>v9;
	 v9.resize(max(v.size() , v7.size()));
	 vector<int>::iterator itEnd2 = set_difference(v7.begin(), v7.end(), v.begin(), v.end(), v9.begin());
	 for_each(v9.begin(), itEnd2, print01);
	 cout << endl;
}



int main()
{
//	//����ʹ��
//	/*test1();*/
//
//	//string����
//	/*test2();*/
//
//	//vector����			��������ʣ�
//	/*test1();*/
//
//	//deque����		(�������)
//	//test3();
//
//	//stack����
//	/*test4();*/
//
//	//queue����
//	//test5();
//
//	//list����
//	/*test6();*/
//
//	//set����
//	//test7();
//
//	//map����
//	//test8();
//
//	//ν��
//	//test9();
//
//	//�ڽ���������
//	/*test10();*/
//
//	//�㷨
//	test11();
//
//

	system("pause");
	return 0;
}
