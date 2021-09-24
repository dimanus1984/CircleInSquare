#include<iostream>
#include"Circle.h"
#include"Square.h"
#include"CircleInSquare.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	double side_a = 5;
	Square square = Square(side_a);
	CircleInSquare circle = CircleInSquare(side_a);
	cout << circle.getRadius() << endl;
}