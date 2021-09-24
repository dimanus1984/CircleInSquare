#pragma once
#include"Circle.h"
#include"Square.h"

class CircleInSquare :public Circle, public Square
{
public:
	// � ������� ����� ������� ����������.
	// ������ ��������� ���������� ����� �������� �������.
	CircleInSquare(double side) :Square(side), Circle(side / 2) {}
};

