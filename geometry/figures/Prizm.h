#pragma once
#ifndef PRACTICE_CUBE_H
#define PRACTICE_CUBE_H

#include "../Shape.h"

class Prizm : public Shape {
private:
    const int peaksCount = 8;
    Peak** peaks = new Peak * [peaksCount];
    double local_a = 0;
    double local_b = 0;
    double local_h = 0;

public:
    int getPeaksCount() const override
    {
        return this->peaksCount;
    }
    double find_volume() override
    {
        return local_a * local_b * local_h;
    }
    double find_all_square() override
    {
        return 2 * local_a * local_b + find_brink();
    }
    double find_brink() override
    {
        return 2 * local_a * local_h + 2 * local_b * local_h;
    }
    Peak** find_peaks() override
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

        peaks[0]->set_x(x0); // A
        peaks[0]->set_y(y0);
        peaks[0]->set_z(z0);

        peaks[1]->set_x(x0); // B
        peaks[1]->set_y(y0);
        peaks[1]->set_z(z0 + local_b);

        peaks[2]->set_x(x0 + local_a); // C
        peaks[2]->set_y(y0);
        peaks[2]->set_z(z0 + local_b);

        peaks[3]->set_x(x0 + local_a); // D
        peaks[3]->set_y(y0);
        peaks[3]->set_z(z0);

        peaks[4]->set_x(x0); // E
        peaks[4]->set_y(y0 + local_h);
        peaks[4]->set_z(z0);

        peaks[5]->set_x(x0); // F
        peaks[5]->set_y(y0 + local_h);
        peaks[5]->set_z(z0 + local_b);

        peaks[6]->set_x(x0 + local_a); // G
        peaks[6]->set_y(y0 + local_h);
        peaks[6]->set_z(z0 + local_b);

        peaks[7]->set_x(x0 + local_a); // H
        peaks[7]->set_y(y0 + local_h);
        peaks[7]->set_z(z0);

        return peaks;
    }

    //constructors:
    Prizm (double x1, double y1, double z1,
           double x2, double y2, double z2,
           double x3, double y3, double z3,
           double x4, double y4, double z4,
           double x5, double y5, double z5,
           double x6, double y6, double z6,
           double x7, double y7, double z7,
           double x8, double y8, double z8);
    Prizm (const Peak& A,
           const Peak& B,
           const Peak& C,
           const Peak& D,
           const Peak& E,
           const Peak& F,
           const Peak& G,
           const Peak& H);
    explicit Prizm (double a, double b, double h);
    Prizm();	// default constructor
    ~Prizm(); // destructor
};


#endif //PRACTICE_CUBE_H