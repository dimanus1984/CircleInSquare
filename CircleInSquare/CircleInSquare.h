#pragma once
#include"Circle.h"
#include"Square.h"

class CircleInSquare :public Circle, public Square
{
public:
	// В квадрат можно вписать окружность.
	// Радиус вписанной окружности равен половине стороны.
	CircleInSquare(double side) :Square(side), Circle(side / 2) {}
};

