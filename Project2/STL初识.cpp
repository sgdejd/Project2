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
	bool operator==(const Person1& p)//使用find算法寻找自定义数组类型时重载==
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



//vector容器

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
	//尾插法
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
	//通过迭代器访问容器中的数据
	vector<int >::iterator itBegin = v.begin();//起始迭代器，指向容器中的第一个元素
	vector<int>::iterator itEnd = v.end();//结束迭代器，指向容器中的最后一个元素的下一个位置；

	//第一种遍历
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//第二种遍历
	/*for (vector<int>::iterator it=v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/

	//第三种遍历
	//for_each(v.begin(), v.end(), myPrint);

	//遍历自定义数组类型
	
	//for (vector<Person1>::iterator it=v2.begin();it!=v2.end(); it++)
	//{
	//	cout << (*it).m_Name <<"\t" << (*it).m_Age << endl;
	//	//cout << it->m_Name <<"\t" << it->m_Age << endl;
	//}

	//vector嵌套vector遍历

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
		//(*it)是一个vector容器
		for (vector<Person1>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << (*vit).m_Name << "\t" << (*vit).m_Age << endl;
			//cout << vit->m_Name <<"\t" << vit->m_Age << endl;
		}
	}
	if (v.empty())
	{
		cout << "v为空" << endl;
	}
	else
	{
		cout << "v不为空" << endl;
		cout << "v的容量为：" << v.capacity() << endl;
		cout << "v的大小为：" << v.size() << endl;
	}
	v.resize(10,5);//重新指定大小，以5填充（默认为0填充）
	printVector(v);
	
	v.resize(4);//如果指定的变小了，超出部分会删除
	printVector(v);

	//尾删法
	v.pop_back();
	printVector(v);
	//插入
	v.insert(v.begin(), 100);
	printVector(v);
	v.insert(v.begin(), 2, 500);
	printVector(v);
	//删除
	v.erase(v.begin());
	printVector(v);
	//清空
	/*v.erase(v.begin(), v.end());
	printVector(v);
	v.clear();
	printVector(v);*/
	//数据存取
	v.front()=240;
	v.back() = 666;
	v[2] = 888;
	v.at(3) = 999;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "  ";
	}
	cout << endl;

	//互换容器里的数据swap(vec)
	vector<int>v1;
	//for (int i = 0; i <10; i++)
	//{
	//	v1.push_back(i);
	//}
	//v.swap(v1);
	//printVector(v);
	//printVector(v1);

	v1.reserve(100000);//预留空间，数据量过大时减少系统开辟内存空间的次数
	for (int i = 0; i <100000; i++)
	{
		v1.push_back(i);
	}
	v1.resize(5);
	
	//巧用swap收缩内存  
	vector<int>(v1).swap(v1);//vector<int>(v1);匿名对象    vector<int> v(v1)拷贝构造函数
	cout << "v的容量为：" << v1.capacity() << endl;
	cout << "v的大小为：" << v1.size() << endl;

}





//string容器
void test2()
{
	//string构造函数（4种）：
	string s1;
	const char* str = "hello world";
	string s2(str);
	string s3(s2);
	string s4(10, 'a');

	//string赋值与拼接
	string s5;
	s5.assign(str,5);
	cout << s5 << endl;
	string s6;
	s6.assign(3, 's');
	cout << s6 << endl;
	s6 += s5;
	cout << s6 << endl;
	//string& append(const string &s,int pos,int n)   从字符串s中pos位置,截取n个字符连接到字符串末尾
	s6.append(str, 6, 5);
	cout << s6 << endl;

	//string查找与替换
	//find从左往右查找，rfind从右往左查
	int pos = s6.find("l0l")	;
	if (pos == -1)
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << pos << endl;
	}
	pos = s6.rfind("ll");
	cout << pos << endl;
	s6.replace(0, 1, "aaaa");
	cout << s6 << endl;

	//字符串比较（如果两个字符串相等返回0，>返回 1 ，<返回 -1）
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
	
	//string字符存取
	//1、通过 [ ] 访问单个字符
	for (int i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << "  ";
	}
	cout << endl;
	//2、通过at方式访问单个字符
	//for (int i = 0; i < s1.size(); i++)
	//{
	//	cout << s1.at(i) << "  ";
	//}
	//cout << endl;

	//字符串插入删除
	s1.insert(0, "888");//从0号位插入888
	cout << s1 << endl;
	s1.erase(0,3);//从0号位删除3个字符
	cout << s1 << endl;

	//string子串
	string subStr = s1.substr(0, 5);//从0号位，截取5个字符作为subStr的值
	cout << subStr << endl;
}



//deque容器

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

	//排序		默认排序规则   从小到大 升序
	//对于支持随机访问的迭代器的容器，都可以用sort直接进行排序
	printDeque(d1);
	sort(d1.begin(),d1.end());//要使用sort算法必须包含<algorithm>
	cout << "排序后：" << endl;
	printDeque(d1);
}




//stack容器 （栈）先进后出		栈顶访问数据，不容许遍历
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
		cout << "这是个空栈" << endl;
	}
	else
	{
		cout << "栈有：" << stk.size() << "个数据" << endl;
	}
	while (!stk2.empty())
	{
		cout <<"stk2栈顶数据为：" << stk2.top() << endl;
		stk2.pop();
	}
}




//queue容器		队列 （先进先出）队头，队尾容许访问数据，不容许遍历
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
		cout << "队列为空" << endl;
	}
	else
	{
		cout << "这个队列的数据为：" << endl;;
		while (!q2.empty()) 
		{
			 cout<< q2.front() << endl;
			q2.pop();
		}
	}
}





//list容器   （双向循环链表）链表是物理存储单元上非连续的存储结构，逻辑顺序通过链表的指针实现
//				 链表由一系列结点构成。结点组成：1、存储数据的数据域   2、存储下一个结点的指针域
//				优点：快速插入与删除					缺点：1、容器遍历速度没有数组快（查询慢）2、占用空间比数组大

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it!=L.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

//降序
bool myCompare(int v1, int v2)
{
	return v1 > v2;
}

void test6() 
{
	//构造
	list<int> L1;
	for (int i = 0; i < 5; i++)
	{
		L1.push_back(i);
	}
	printList(L1);
	list<int>L2(L1.begin(), L1.end());
	list<int>L3(L1);

	//赋值
	L2.assign(L1.begin(), L1.end());
	L2.assign(10,66);
	L2.swap(L1);
	printList(L1);
	printList(L2);

	//大小
	L1.resize(15, 88);
	printList(L1);

	//插入删除
	L1.insert(++L1.begin(), 250);
	printList(L1);
	L1.erase(++L1.begin());
	printList(L1);
	L1.remove(88);//删除容器中所有与（）内相同的值
	printList(L1);

	//list容器数据存取			list不能用[ ]访问容器中的元素，也不能用at访问   迭代器不支持随机访问
	//可以用++，--(双向)    不能L1.begin()+2
	/*L1.begin()++;
	L1.end()--;*/

	//反转
	L1.reverse();
	cout << "反转后：" << endl;
	printList(L1);

	//排序
	L1.push_back(34);
	//升序
	L1.sort();
	printList(L1);
	//降序
	L1.sort(myCompare);
	printList(L1);
}





//set/multiset容器			关联式容器，底层二叉树。set不允许有重复元素，multiset允许有重复元素
//pair对组
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
	bool operator()( int v1, int v2)const//必须加入const限定修饰
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
		st1.insert(i);//插入只能insert
	}
	printSet(st1);

	set<int>st2(st1);
	
	//st2.size();//大小
	//st2.empty();//是否为空
	st2.swap(st1);//交换

	st2.erase(st2.begin());
	printSet(st2);

	//find()如果找到输入元素返回的是该元素的迭代器，需要解指针才能得到值，如果没找到，会返回end（）；
	if (st2.find(2)!=st2.end())
	{
		cout << "找到元素：" << *st2.find(2) << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//count()会返回查询的元素个数，但因set无法存储重复元素，所以set.count()只能返回 0 或 1。
	cout << "st2里有" << st2.count(2) << "个2" << endl;

	//set.insert(),有一个second函数返回类型是bool类型的值。插入成功时返回1，失败时返回0
	pair<set<int>::iterator, bool> ret = st2.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}
	ret=st2.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}

	//对组的创建
	pair<string, int> p("杨金山", 20);
	cout << "姓名：" << p.first << "\t年龄：" << p.second << endl;
	pair<string, int> p2=make_pair("陈佳伟", 20);
	cout << "姓名：" << p2.first << "\t年龄：" << p2.second << endl;

	//利用仿函数改变排序顺序
	set<int, MyCompare>st3;//因为set<int,MyCompare>里的MyCompare是const对象（静态成员函数）
											//所以需要给我们创建的MyCompare(非静态成员函数)，加上const修饰让它变为静态成员函数
	for (int i = 0; i < 5; i++)
	{
		st3.insert(i);//插入只能insert
	}
	for (set<int,MyCompare>::iterator it = st3.begin(); it!=st3.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;

	//set添加自定义数据类型
	set<Person1, ComparePerson> st4;
	Person1 p21("关羽", 28);
	Person1 p1("刘备", 30);
	Person1 p3("张飞", 26);
	Person1 p4("赵云", 22);
	st4.insert(p1);
	st4.insert(p21);
	st4.insert(p3);
	st4.insert(p4);
	for (set<Person1,ComparePerson>::iterator it = st4.begin(); it!=st4.end(); it++)
	{
		cout <<"姓名：" << it->m_Name << "年龄："<<it->m_Age<<endl;
	}
}





//map容器 map中所有元素都是pair
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

	//插入
	//第一种
	m.insert(pair<int, int>(6, 60));
	//第二种
	m.insert(make_pair(7, 70));
	//第三种
	m.insert(map<int, int>::value_type(8, 80));
	//第四种
	m[9] = 90;//不建议用这种方式插入，可以用这种方式访问key对应的value

	//查找
	m.find(8);//m.find(8)返回迭代器;
	map<int, int >::iterator pos = m.find(5);
	if (pos != m.end())
	{
		cout << "查到了元素key:" << (*pos).first << "\t他的value=" << (*pos).second << endl;
	}
	else
	{
		cout << "没找到元素" << endl;
	}
	
	//排序
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





//谓词： 仿函数是bool类型的

class GreatFive
{
public:
	bool operator()(int val)//一元谓词(一个参数)
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
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到>5的元素为：" << *it << endl;
	}

	//二元谓词
	sort(v.begin(), v.end(), MyCompare());//MyCompare二元谓词
	printVector(v);
}





//内建函数对象（plus 加法，minus 减法，multiplies 乘法，divides 除法，modulus 取模）算术仿函数
//（equal_to  等于，not_equal_to 不等于，greater 大于，greater_equal 大于等于，less 小于，less_equal 小于等于）关系仿函数
// （logical_and 逻辑与，logical_or 逻辑或，logical_not 逻辑非）逻辑仿函数
void test10()
{
	//negate 一元仿函数 取反仿函数
	negate<int> n;
	cout << n(30) << endl;//-30

	//plus 二元仿函数 加法
	plus<int>p;
	cout << p(10, 20) << endl;//30

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	sort(v.begin(), v.end(), greater<int>());//降序排列
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

	//利用逻辑非，将容器v1搬运到v2中，并执行取反操作
	vector<bool> v2;
	v2.resize(v1.size());
	transform(v1.begin(), v1.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}






//算法
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
	for_each(v. begin(), v.end(), print01);//普通函数
	cout << endl;
	for_each(v.begin(), v.end(), Print02());//仿函数
	cout << endl;

	//transform算法
	vector<int> v2;
	v2.resize(v.size());//必须提前开辟空间
	transform(v.begin(), v.end(), v2.begin(), Print03());//Print03不仅仅可以输出，还可以进行其他操作
	for_each(v2.begin(), v2.end(), Print02());
	cout << endl;

	//find算法(返回自定义数组类型时需要重载==)
	vector<int>::iterator it = find(v.begin(), v.end(), 4);
	if (it == v.end())
	{
		cout << "未找到元素" << endl;
	}
	else
	{
		cout << "找到元素：" << *it << endl;
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
	vector<Person1>::iterator it1 = find(v3.begin(), v3.end(), p3);//自定义类型查找
	if (it1 == v3.end())
	{
		cout << "未找到元素" << endl;
	}
	else
	{
		cout << "找到元素：" <<"姓名：" << (*it1).m_Name<< "\t年龄："<<(*it1).m_Age << endl;
	}

	//find_if算法（统计自定义数据类型需要：写仿函数告诉编译器按什么条件统计）
	vector<int>::iterator it2 = find_if(v.begin(), v.end(), GreatFive());
	if (it2 == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到>5的元素为：" << *it2 << endl;
	}

	//adjacent_find算法（查找相邻重复元素）
	//v.push_back(9);
	vector<int>::iterator pos=adjacent_find(v.begin(), v.end());
	if (pos == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到相邻重复元素为：" << *pos<< endl;
	}

	//binary_serch算法（查找指定元素是否存在）二分查法
	//注意：必须在有序（有序性很弱，他只判断你找的元素的前后元素是否有序）容器中查找。
	//例：
	//v.push_back(2);//添加一个2后，就找不到元素9了,但却能找到9之前的所有数
	printVector(v);
	bool ret = binary_search(v.begin(), v.end(), 8);
	if (ret)
	{
		cout << "找到元素" << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//count算法（统计查找元素个数）统计自定义数据类型需要重载==
	cout << "2的个数为：" << count(v.begin(), v.end(), 2) << endl;
	cout << "p1的个数为：" << count(v3.begin(), v3.end(), p1) << endl;

	//count_if算法（按条件统计元素个数）统计自定义数据类型需要：写仿函数告诉编译器按什么条件统计
	printVector(v);
	cout << "大于5个元素个数为：" << count_if(v.begin(), v.end(), GreatFive()) << endl;

	//sort算法（排序）
	sort(v.begin(), v.end(), greater<int>());
	printVector(v);

	//random_shuffle算法（让容器中的元素随机排列）
	srand((unsigned int)time(NULL));
	random_shuffle(v.begin(),v.end());
	printVector(v);

	//merge算法（将两个容器合并，并放入一个新的容器中）
	vector<int> v4;
	v4.resize(v.size() + v2.size());
	sort(v.begin(), v.end());//原容器必须有序
	merge(v.begin(), v.end(), v2.begin(), v2.end(), v4.begin());
	printVector(v4);
	
	//reverse算法（反转容器元素）
	reverse(v4.begin(), v4.end());
	printVector(v4);

	//copy算法（拷贝）
	vector<int>v5;
	v5.resize(v4.size());
	copy(v4.begin(), v4.end(), v5.begin());
	printVector(v5);

	//replace算法（替换）
	replace(v5.begin(), v5.end(), 9, 19);
	printVector(v5);

	//replace_if（按条件替换）条件：谓词
	replace_if(v5.begin(), v5.end(), GreatFive(), 666);
	printVector(v5);

	//swap算法（互换两个容器中的元素）注意：1、同一类型容器。2、互换后大小容量也会改变
	swap(v4, v5);
	printVector(v4);
	printVector(v5);

	//accumulate算法（计算容器元素累计总和）
	cout<<accumulate(v5.begin(),v5.end(),10)<<endl;//  "10"需要给一个初始值

	//fill算法（向容器中添加指定的元素）后期添加元素，会把之前的元素全部替换
	 fill(v5.begin(), v5.end(), 100);//“100”填充的值
	 printVector(v5);

	 //set_intersection算法（求两个容器的交集）（两个容器中的重复元素）
	 vector<int>v6;
	 vector<int>v7;
	 for (int i = 0; i < 10; i++)
	 {
		 v7.push_back(i + 5);
	 }
	 v6.resize(min(v.size(),v7.size()));
	//返回目标容器的最后一个元素的迭代器
	vector<int>::iterator itEnd= set_intersection(v.begin(), v.end(), v7.begin(), v7.end(), v6.begin());
	 for_each(v6.begin(), itEnd, print01);//不然编译器会用0填充空余的位置
	 cout << endl;

	 //set_union算法（求两个容器的并集）（合并去重复）
	 vector<int>v8;
	 v8.resize(v.size() + v7.size());
	 vector<int>::iterator itEnd1 = set_union(v.begin(), v.end(), v7.begin(), v7.end(), v8.begin());
	 for_each(v8.begin(), itEnd1, print01);
	 cout << endl;

	 //set_difference算法（求两个容器的差集）（前一个容器和后一个容器相比不重复的元素）
	 vector<int>v9;
	 v9.resize(max(v.size() , v7.size()));
	 vector<int>::iterator itEnd2 = set_difference(v7.begin(), v7.end(), v.begin(), v.end(), v9.begin());
	 for_each(v9.begin(), itEnd2, print01);
	 cout << endl;
}



int main()
{
//	//容器使用
//	/*test1();*/
//
//	//string容器
//	/*test2();*/
//
//	//vector容器			（随机访问）
//	/*test1();*/
//
//	//deque容器		(随机访问)
//	//test3();
//
//	//stack容器
//	/*test4();*/
//
//	//queue容器
//	//test5();
//
//	//list容器
//	/*test6();*/
//
//	//set容器
//	//test7();
//
//	//map容器
//	//test8();
//
//	//谓词
//	//test9();
//
//	//内建函数对象
//	/*test10();*/
//
//	//算法
//	test11();
//
//

	system("pause");
	return 0;
}
