#include "Pyramid.h"
#include "Shape.h"

using namespace std;

double Shape::find_volume(double a, double h) 
{
	volume = (pow(a, 2) * h) / 3;
	return volume;
}

double Shape::find_brink(double a, double h)
{
	double temp = pow(pow(a / 2, 2) + pow(h, 2), 1 / 2);
	brink = (a * temp) / 2;
	return brink;
}

double Shape::find_all_square(double a, double h)
{
	all_square = pow(a, 2) + 4 * find_brink(a, h);
	return all_square;
}
Peak* Shape::find_peaks(double a, double h)
{
	x0 = 0; // coordinate zero point 
	y0 = 0;
	z0 = 0;

	peaks[1].set_name("A");
	peaks[1].set_x(x0);	// A
	peaks[1].set_y(y0);
	peaks[1].set_z(z0);

	peaks[2].set_name("B");
	peaks[2].set_x(x0 + a);	// B
	peaks[2].set_y(y0);
	peaks[2].set_z(z0);

	peaks[3].set_name("C");
	peaks[3].set_x(x0);	// C
	peaks[3].set_y(y0 + a);
	peaks[3].set_z(z0);

	peaks[4].set_name("D");
	peaks[4].set_x(x0 + a);	// D
	peaks[4].set_y(y0 + a);
	peaks[4].set_z(z0);

	peaks[0].set_name("S");
	peaks[0].set_x(peaks[3].get_x() / 2); // S
	peaks[0].set_y(peaks[3].get_y() / 2);
	peaks[0].set_z(z0 + h);
}
//construct:
Pyramid::Pyramid(double x1, double y1, double z1, double x2, double y2, double z2, double x3, double y3, double z3, double x4, double y4, double z4, double x5, double y5, double z5) // user selecting coordinates for peaks relatively by coordinate zero point
{
	x0 = 0;
	y0 = 0;
	z0 = 0;
	peaks[0].set_x(x1);
	peaks[0].set_y(y1);
	peaks[0].set_z(z1);
	peaks[1].set_x(x2);
	peaks[1].set_y(y2);
	peaks[1].set_z(z2);
	peaks[2].set_x(x3);
	peaks[2].set_y(y3);
	peaks[2].set_z(z3);
	peaks[3].set_x(x4);
	peaks[3].set_y(y4);
	peaks[3].set_z(z4);
	peaks[4].set_x(x5);
	peaks[4].set_y(y5);
	peaks[4].set_z(z5);
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

Pyramid::Pyramid()
{
	Shape::x0 = 0;
	Shape::y0 = 0;
	Shape::z0 = 0;
	Shape::all_square = 0;
	Shape::brink = 0;
	Shape::volume = 0;
	Pyramid::a = 0;
	Pyramid::h = 0;
}