#include "Pyramid.h"
#include <iostream>

using namespace std;

//sets:
//void Pyramid::set_peaks(double my_peaks)
//{
//	this->peaks = my_peaks;
//}
void Pyramid::set_brink(double my_brink)
{
	this->brink = my_brink;
}
void Pyramid::set_all_square(double my_all_square)
{
	this->all_square = my_all_square;
}
void Pyramid::set_volume(double my_volume)
{
	this->volume = my_volume;
}
//gets:
//double get_peaks(double)
//{
//	...
//}
double Pyramid::get_brink(double a, double h)
{
	double temp = pow(pow(a / 2, 2) + pow(h, 2), 1 / 2);
	return this->brink = (a * temp) / 2;
}
double Pyramid::get_all_square(double a, double h)
{
	return this->all_square = pow(a, 2) + 4 * get_brink(a, h);
}
double Pyramid::get_volume(double a, double h)
{
	return this->volume = (pow(a, 2) * h) / 3;
}

//construct: