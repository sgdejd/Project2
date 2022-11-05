#include "Circle.h"
const double PI = 3.14;
void Circle::setR(int r)
{
	m_R = r;
}
int Circle::getR()
{
	return m_R;
}
void Circle::setCenter(Point center)
{
	m_Center = center;
}
Point Circle::getCenter()
{
	return m_Center;
}
double Circle::calculateZC()
{
	return 2 * PI * m_R;
}
