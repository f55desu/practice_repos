//
// Created by mailj on 7/9/2020.
//

#include "Shape.h"

//sets:
void Shape::set_brink(double my_brink)
{
    brink = my_brink;
}
void Shape::set_all_square(double my_all_square)
{
    all_square = my_all_square;
}
void Shape::set_volume(double my_volume)
{
    volume = my_volume;
}
//gets:
double Shape::get_brink(double a, double h) const
{
    return brink;
}
double Shape::get_all_square(double a, double h) const
{
    return all_square;
}
double Shape::get_volume(double a, double h) const
{
    return volume;
}