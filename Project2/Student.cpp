#include "Student.h"

void Student::setStudent()
	{
		cout << "������ѧ��ѧ�ţ�" << endl;
		cin >> s_id;
		cout << "������ѧ��������" << endl;
		cin >> s_name;
	}

	void Student::showStuent(int s_id, string s_name)
	{
		cout << "�������ѧ����ϢΪ��" << endl;
		cout << "ѧ�ţ�  " << s_id << "\t������  " << s_name << endl;
	}
