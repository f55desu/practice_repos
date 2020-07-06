#include "Peak.h"
#include "Shape.h"

#pragma once
class Pyramid: public Shape
{
	double a, h; // сторона основания и высота, соответственно 
public:
	//construct:
	Pyramid(double x1, double y1, double z1, double x2, double y2, double z2, double x3, double y3, double z3, double x4, double y4, double z4, double x5, double y5, double z5);
	Pyramid(Peak S, Peak A, Peak B, Peak C, Peak D);
	Pyramid(double a, double h);
	Pyramid();	// default consttructor
};

