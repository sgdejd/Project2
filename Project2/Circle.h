#pragma once
#include <iostream>
using namespace std;
#include"Point.h"
class Circle
{
public:
	void setCenter(Point center);
	Point getCenter();
	void setR(int r);
	int  getR();
	double calculateZC();
private:
	int m_R;
	Point m_Center;
};
