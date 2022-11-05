#include "Student.h"

void Student::setStudent()
	{
		cout << "请输入学生学号：" << endl;
		cin >> s_id;
		cout << "请输入学生姓名：" << endl;
		cin >> s_name;
	}

	void Student::showStuent(int s_id, string s_name)
	{
		cout << "您输入的学生信息为：" << endl;
		cout << "学号：  " << s_id << "\t姓名：  " << s_name << endl;
	}
