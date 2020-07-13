#include "Prizm.h"

Prizm::Prizm (double x1, double y1, double z1,
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
    peaks[4]->set_name("E");
    peaks[5]->set_name("F");
    peaks[6]->set_name("G");
    peaks[7]->set_name("H");

    peaks[0]->set_x(x0 + x1); // A
    peaks[0]->set_y(y0 + y1);
    peaks[0]->set_z(z0 + z1);

    peaks[1]->set_x(x0 + x2); // B
    peaks[1]->set_y(y0 + y2);
    peaks[1]->set_z(z0 + z2);

    peaks[2]->set_x(x0 + x3); // C
    peaks[2]->set_y(y0 + y3);
    peaks[2]->set_z(z0 + z3);

    peaks[3]->set_x(x0 + x4); // D
    peaks[3]->set_y(y0 + y4);
    peaks[3]->set_z(z0 + z4);

    peaks[4]->set_x(x0 + x5); // E
    peaks[4]->set_y(y0 + y5);
    peaks[4]->set_z(z0 + z5);

    peaks[5]->set_x(x0 + x6); // F
    peaks[5]->set_y(y0 + y6);
    peaks[5]->set_z(z0 + z6);

    peaks[6]->set_x(x0 + x7); // G
    peaks[6]->set_y(y0 + y7);
    peaks[6]->set_z(z0 + z7);

    peaks[7]->set_x(x0 + x8); // H
    peaks[7]->set_y(y0 + y8);
    peaks[7]->set_z(z0 + z8);
}

Prizm::Prizm (const Peak& A,
              const Peak& B,
              const Peak& C,
              const Peak& D,
              const Peak& E,
              const Peak& F,
              const Peak& G,
              const Peak& H)
{
    peaks[0] = new Peak(A);
    peaks[1] = new Peak(B);
    peaks[2] = new Peak(C);
    peaks[3] = new Peak(D);
    peaks[4] = new Peak(E);
    peaks[5] = new Peak(F);
    peaks[6] = new Peak(G);
    peaks[7] = new Peak(H);
}

Prizm::Prizm (double a, double b, double h)
{
    local_a = a;
    local_b = b;
    local_h = h;
}

Prizm::Prizm()
= default;

Prizm::~Prizm()
= default;