#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle()
{
	radius = 0;
	circ = 0;
	diameter = 0;
	area = 0;
}
Circle::~Circle()
{
}
void Circle::setRadius(double r)
{
	radius = r;
}
double Circle::getRadius()
{
	return radius;
}
void Circle::setCirc(double c)
{
	circ = c;
}
double Circle::getCirc()
{
	return circ;
}
void Circle::setDiameter(double d)
{
	diameter = d;
}
double Circle::getDiameter()
{
	return diameter;
}
void Circle::setArea(double a)
{
	area = a;
}
double Circle::getArea()
{
	return area;
}
void Circle::setTotArea(double a)
{
	totarea = a;
}
double Circle::getTotArea()
{
	return totarea;
}
void Circle::setTotDiameter(double d)
{
	totdiameter = d;
}
double Circle::getTotDiameter()
{
	return totdiameter;
}
void Circle::setTotCirc(double c)
{
	totcirc = c;
}
double Circle::getTotCirc()
{
	return totcirc;
}

double Circle::calcArea()
{
	totarea = PI * (radius * radius);
	return totarea;
}
double Circle::calcDiameter()
{
	totdiameter = 2 * radius;
	return totdiameter;
}
double Circle::calcCirc()
{
	totcirc = 2 * PI * radius;
	return totcirc;
}
