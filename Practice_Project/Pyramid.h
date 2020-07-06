#include "Peak.h"

#pragma once
class Pyramid
{
private:
	Peak* peaks = new Peak[5]; // declaration of an objects array from class "Peak"
	double x0, y0, z0;	
	double brink; // грань 
	double all_square; // площадь поверхности 
	double volume; // объем 
	double a, h; // сторона основания и высота, соответственно 
public:
	//sets:
	void set_brink(double my_brink);
	void set_all_square(double my_all_square);
	void set_volume(double my_volume);
	//gets:
	double get_brink(double a, double h);
	double get_all_square(double a, double h);
	double get_volume(double a, double h);
	
	//construct:
	Pyramid(double x1, double y1, double z1, double x2, double y2, double z2, double x3, double y3, double z3, double x4, double y4, double z4);
	Pyramid(Peak S, Peak A, Peak B, Peak C, Peak D);
	Pyramid(double a, double h);
};

