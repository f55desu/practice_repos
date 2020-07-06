#include "Peak.h"

//sets:
void Peak::set_x(double x)
{
	this->x = x;
}
void Peak::set_y(double y)
{
	this->y = y;
}
void Peak::set_z(double z)
{
	this->z = z;
}
//gets:
double Peak::get_x()
{
	return this->x;
}
double Peak::get_y()
{
	return this->y;
}
double Peak::get_z()
{
	return this->z;
}
//construct:
Peak::Peak(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
Peak::Peak(const Peak& peak)
{
	this->x = peak.x;
	this->y = peak.y;
	this->z = peak.z;
}
Peak::Peak()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}