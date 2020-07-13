#include "parallelepiped.h"

parallelepiped::parallelepiped(double x1, double y1, double z1,
    double x2, double y2, double z2,
    double x3, double y3, double z3,
    double x4, double y4, double z4,
    double x5, double y5, double z5,
    double x6, double y6, double z6,
    double x7, double y7, double z7,
    double x8, double y8, double z8)
{
    // create objects
    peaks[0] = new Peak();
    peaks[1] = new Peak();
    peaks[2] = new Peak();
    peaks[3] = new Peak();
    peaks[4] = new Peak();
    peaks[5] = new Peak();
    peaks[6] = new Peak();
    peaks[7] = new Peak();

    // set names
    peaks[0]->set_name("A");
    peaks[1]->set_name("B");
    peaks[2]->set_name("C");
    peaks[3]->set_name("D");
    peaks[4]->set_name("A1");
    peaks[5]->set_name("B1");
    peaks[6]->set_name("C1");
    peaks[7]->set_name("D1");

    // set coordinates

    // A
    peaks[0]->set_x(x0 + x1);
    peaks[0]->set_y(y0 + y1);
    peaks[0]->set_z(z0 + z1);

    // B
    peaks[1]->set_x(x0 + x2);
    peaks[1]->set_y(y0 + y2);
    peaks[1]->set_z(z0 + z2);

    // C
    peaks[2]->set_x(x0 + x3);
    peaks[2]->set_y(y0 + y3);
    peaks[2]->set_z(z0 + z3);

    // D
    peaks[3]->set_x(x0 + x4);
    peaks[3]->set_y(y0 + y4);
    peaks[3]->set_z(z0 + z4);

    // A1
    peaks[4]->set_x(x0 + x5);
    peaks[4]->set_y(y0 + y5);
    peaks[4]->set_z(z0 + z5);

    // B1
    peaks[5]->set_x(x0 + x6);
    peaks[5]->set_y(y0 + y6);
    peaks[5]->set_z(z0 + z6);

    // C1
    peaks[6]->set_x(x0 + x7);
    peaks[6]->set_y(y0 + y7);
    peaks[6]->set_z(z0 + z7);

    // D1
    peaks[7]->set_x(x0 + x8);
    peaks[7]->set_y(y0 + y8);
    peaks[7]->set_z(z0 + z8);
}

parallelepiped::parallelepiped(const Peak& A,
    const Peak& B,
    const Peak& C,
    const Peak& D,
    const Peak& A1,
    const Peak& B1,
    const Peak& C1,
    const Peak& D1)
{
    // create objects
    peaks[0] = new Peak(A);
    peaks[1] = new Peak(B);
    peaks[2] = new Peak(C);
    peaks[3] = new Peak(D);
    peaks[4] = new Peak(A1);
    peaks[5] = new Peak(B1);
    peaks[6] = new Peak(C1);
    peaks[7] = new Peak(D1);
}

parallelepiped::parallelepiped(double a, double b, double c)
{
    width = a;
    heigh = b;
    length = c;
}

parallelepiped::parallelepiped()
= default;

parallelepiped::~parallelepiped()
= default;
