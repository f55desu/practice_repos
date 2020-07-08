#include "Peak.h"

/*
	This class is for work with peaks as array of a points.
	Every point will have a 3 props (coordinates 'x', 'y', 'z')
	Don't forget to include Peak.h in yours class.
	As an example for requesting an object (peak) is "peaks[n].get_x", where 'n' is an index number of an object in array.
*/

// the first of all a regular sets and gets:

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
void Peak::set_name(string name)
{
	this->name = name;
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
string Peak::get_name()
{
	return this->name;
}

//construct:
Peak::Peak(double x, double y, double z)  // input constructor 
{
	this->x = x;
	this->y = y;
	this->z = z;
}
Peak::Peak(const Peak& peak) // copy constructor
{
	this->x = peak.x;
	this->y = peak.y;
	this->z = peak.z;
}
Peak::Peak() // default constructor
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}