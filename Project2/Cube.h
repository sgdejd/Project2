#pragma once
#include <iostream>
using namespace std;
class Cube
{
public:
	void setL(int l);
	int getL();
	void setW(int w);
	int getW();
	void setH(int h);
	int getH();
	int calculateS();
	int calculateV();
	bool isSameByClass(Cube& c);
private:
	int m_L;
	int m_W;
	int m_H;
};
