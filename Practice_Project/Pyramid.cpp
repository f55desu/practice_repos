#include "Pyramid.h"
#include <iostream>

using namespace std;

//sets:

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

Pyramid::Pyramid(double x1, double y1, double z1, double x2, double y2, double z2, double x3, double y3, double z3, double x4, double y4, double z4) // selecting one of the peaks as zero coordinate point
{
	x0 = 0;
	y0 = 0;
	z0 = 0;
	peaks[0].set_x(x1);
	peaks[0].set_y(y1);
	peaks[0].set_z(z1);
}

Pyramid::Pyramid(Peak S, Peak A, Peak B, Peak C, Peak D) 
{
	/*selecting peaks in array for pyramid
	'S' - highest peak, 'A','B','C','D' - ground peaks  */

	x0 = 0; // zero coordinate point 
	y0 = 0;
	z0 = 0;
	peaks[0] = S;
	peaks[1] = A;
	peaks[2] = B;
	peaks[3] = C;
	peaks[4] = D;
}

Pyramid::Pyramid(double a, double h)  // coordinate calculation
{
	x0 = 0; // coordinate zero point 
	y0 = 0;
	z0 = 0;

	peaks[1].set_x(x0);	// A
	peaks[1].set_y(y0);
	peaks[1].set_z(z0);

	peaks[2].set_x(x0 + a);	// B
	peaks[2].set_y(y0);
	peaks[2].set_z(z0);

	peaks[3].set_x(x0);	// C
	peaks[3].set_y(y0 + a);
	peaks[3].set_z(z0);

	peaks[4].set_x(x0 + a);	// D
	peaks[4].set_y(y0 + a);
	peaks[4].set_z(z0);

	peaks[0].set_x(peaks[3].get_x() / 2); // S
	peaks[0].set_y(peaks[3].get_y() / 2);
	peaks[0].set_z(z0 + h);
}