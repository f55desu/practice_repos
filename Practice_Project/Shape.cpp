#include "Shape.h"

//sets:
void Shape::set_brink_square(double my_brink)
{
	this->brink_square = my_brink;
}
void Shape::set_all_square(double my_all_square)
{
	this->all_square = my_all_square;
}
void Shape::set_volume(double my_volume)
{
	this->volume = my_volume;
}
//gets:
double Shape::get_brink_square(double a, double h)
{
	return this->brink_square;
}
double Shape::get_all_square(double a, double h)
{
	return this->all_square;
}
double Shape::get_volume(double a, double h)
{
	return this->volume;
}