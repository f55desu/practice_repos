//
// Created by mailj on 7/9/2020.
//

#include "Peak.h"

//sets:
void Peak::set_x(double xData)
{
    this->x = xData;
}
void Peak::set_y(double yData)
{
    this->y = yData;
}
void Peak::set_z(double zData)
{
    this->z = zData;
}
void Peak::set_name(const string& nameData)
{
    this->name = nameData;
}

//gets:
double Peak::get_x() const
{
    return this->x;
}
double Peak::get_y() const
{
    return this->y;
}
double Peak::get_z() const
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
    this->name = "unnamed";
    this->x = x;
    this->y = y;
    this->z = z;
}
Peak::Peak(const Peak& peak) // copy constructor
{
    this->name = peak.name;
    this->x = peak.x;
    this->y = peak.y;
    this->z = peak.z;
}
Peak::Peak() // default constructor
{
    this->name = "unnamed";
    this->x = 0;
    this->y = 0;
    this->z = 0;
}
Peak::~Peak()
= default;
