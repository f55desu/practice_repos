//
// Created by mailj on 7/12/2020.
//

#include "Pyramid.h"

Pyramid::Pyramid(double x1, double y1, double z1,
                 double x2, double y2, double z2,
                 double x3, double y3, double z3,
                 double x4, double y4, double z4,
                 double x5, double y5, double z5)
{
    // create objects
    peaks[0] = new Peak();
    peaks[1] = new Peak();
    peaks[2] = new Peak();
    peaks[3] = new Peak();
    peaks[4] = new Peak();

    // set names
    peaks[0]->set_name("S");
    peaks[1]->set_name("A");
    peaks[2]->set_name("B");
    peaks[3]->set_name("C");
    peaks[4]->set_name("D");

    // set coordinates

    // A
    peaks[1]->set_x(x0+x2);
    peaks[1]->set_y(y0+y2);
    peaks[1]->set_z(z0+z2);

    // B
    peaks[2]->set_x(x0+x3);
    peaks[2]->set_y(y0+y3);
    peaks[2]->set_z(z0+z3);

    // C
    peaks[3]->set_x(x0+x4);
    peaks[3]->set_y(y0+y4);
    peaks[3]->set_z(z0+z4);

    // D
    peaks[4]->set_x(x0+x5);
    peaks[4]->set_y(y0+y5);
    peaks[4]->set_z(z0+z5);

    // S
    peaks[0]->set_x(x0+x1);
    peaks[0]->set_y(y0+y1);
    peaks[0]->set_z(z0+z1);
}

Pyramid::Pyramid(const Peak &S,
                 const Peak &A,
                 const Peak &B,
                 const Peak &C,
                 const Peak &D)
{
    // create objects
    peaks[0] = new Peak(S);
    peaks[1] = new Peak(A);
    peaks[2] = new Peak(B);
    peaks[3] = new Peak(C);
    peaks[4] = new Peak(D);
}

Pyramid::Pyramid(double a, double h)
{
    local_a = a;
    local_h = h;
}

Pyramid::Pyramid()
= default;

Pyramid::~Pyramid()
= default;
