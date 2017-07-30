#include <iostream>	
#pragma once

using namespace std;

class Circle
{
public:
	Circle();
	~Circle();

	void setRadius(double);
	double getRadius();
	
	void setCirc(double);
	double getCirc();

	void setDiameter(double);
	double getDiameter();

	void setArea(double);
	double getArea();

	void setTotArea(double);
	double getTotArea();

	void setTotCirc(double);
	double getTotCirc();

	void setTotDiameter(double);
	double getTotDiameter();

	double calcArea();
	double calcDiameter();
	double calcCirc();

	const double PI = 3.14159;

private:
	double radius;
	double circ;
	double diameter;
	double area;

	double totarea;
	double totcirc;
	double totdiameter;
};
