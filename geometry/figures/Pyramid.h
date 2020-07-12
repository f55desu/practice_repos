//
// Created by mailj on 7/12/2020.
//

#ifndef PRACTICE_PYRAMID_H
#define PRACTICE_PYRAMID_H

#include "../Shape.h"
#include <cmath>

class Pyramid: public Shape {
private:
    const int peaksCount = 5;
    Peak** peaks = new Peak*[peaksCount];
    double local_a = 0, local_h = 0;

public:
    int getPeaksCount() const override
    {
        return this->peaksCount;
    }
    double find_volume() override
    {
        return (pow(local_a, 2) * local_h) / 3;
    }
    double find_all_square() override
    {
        return (pow(local_a, 2) + 4 * find_brink());
    }
    double find_brink() override
    {
        double temp = pow(pow(local_a / 2, 2) + pow(local_h, 2), 1 / 2);
        return ((local_a * temp) / 2);
    }
    Peak** find_peaks() override
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
        peaks[1]->set_x(x0);
        peaks[1]->set_y(y0);
        peaks[1]->set_z(z0);

        // B
        peaks[2]->set_x(x0+local_a);
        peaks[2]->set_y(y0);
        peaks[2]->set_z(z0);

        // C
        peaks[3]->set_x(x0+local_a);
        peaks[3]->set_y(y0+local_a);
        peaks[3]->set_z(z0);

        // D
        peaks[4]->set_x(x0);
        peaks[4]->set_y(y0+local_a);
        peaks[4]->set_z(z0);

        // S
        peaks[0]->set_x(peaks[3]->get_x() / 2);
        peaks[0]->set_y(peaks[3]->get_y() / 2);
        peaks[0]->set_z(z0+ local_h);

        return peaks;
    }

    //constructors:
    Pyramid(double x1, double y1, double z1,
            double x2, double y2, double z2,
            double x3, double y3, double z3,
            double x4, double y4, double z4,
            double x5, double y5, double z5);
    Pyramid(const Peak& S,
            const Peak& A,
            const Peak& B,
            const Peak& C,
            const Peak& D);
    Pyramid(double a, double h);
    Pyramid();	// default constructor
    ~Pyramid(); // destructor
};


#endif //PRACTICE_PYRAMID_H
