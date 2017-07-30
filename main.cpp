#include "iostream"
#include "Circle.h"

using namespace std;

int main()
{
	Circle mytest;
	double radius;

	

	cout << "Enter radius: ";
	cin >> radius;
	mytest.setRadius(radius);
	cout << "\n";

	mytest.calcArea();
	mytest.calcCirc();
	mytest.calcDiameter();
	
	cout << "Diameter is: " << mytest.getTotDiameter() << endl;
	cout << "Circumference is: " << mytest.getTotCirc() << endl;
	cout << "Area is: " << mytest.getTotArea() << endl << endl;

	system("pause");

}