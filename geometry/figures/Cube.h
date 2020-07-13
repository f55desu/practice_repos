//
// Created by mailj on 7/12/2020.
//

#ifndef PRACTICE_CUBE_H
#define PRACTICE_CUBE_H

#include "../Shape.h"

class Cube: public Shape {
private:
    const int peaksCount = 8;
    Peak** peaks = new Peak*[peaksCount];
    double local_a = 0;

public:
    int getPeaksCount() const override
    {
        return this->peaksCount;
    }
    double find_volume() override
    {
        return local_a*local_a*local_a;
    }
    double find_all_square() override
    {
        return 6 * find_brink();
    }
    double find_brink() override
    {
        return local_a*local_a;
    }
    double find_face()
    {
        return 0;
    }
    double find_facet()
    {
        return 0;
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
        peaks[4]->set_name("A1");
        peaks[5]->set_name("B1");
        peaks[6]->set_name("C1");
        peaks[7]->set_name("D1");

        // set coordinates

        // A
        peaks[0]->set_x(x0);
        peaks[0]->set_y(y0);
        peaks[0]->set_z(z0);

        // B
        peaks[1]->set_x(x0+local_a);
        peaks[1]->set_y(y0);
        peaks[1]->set_z(z0);

        // C
        peaks[2]->set_x(x0+local_a);
        peaks[2]->set_y(y0+local_a);
        peaks[2]->set_z(z0);

        // D
        peaks[3]->set_x(x0);
        peaks[3]->set_y(y0+local_a);
        peaks[3]->set_z(z0);

        // A1
        peaks[4]->set_x(x0);
        peaks[4]->set_y(y0);
        peaks[4]->set_z(z0+local_a);

        // B1
        peaks[5]->set_x(x0+local_a);
        peaks[5]->set_y(y0);
        peaks[5]->set_z(z0+local_a);

        // C1
        peaks[6]->set_x(x0+local_a);
        peaks[6]->set_y(y0+local_a);
        peaks[6]->set_z(z0+local_a);

        // D1
        peaks[7]->set_x(x0);
        peaks[7]->set_y(y0+local_a);
        peaks[7]->set_z(z0+local_a);

        return peaks;
    }

    //constructors:
    Cube(double x1, double y1, double z1,
         double x2, double y2, double z2,
         double x3, double y3, double z3,
         double x4, double y4, double z4,
         double x5, double y5, double z5,
         double x6, double y6, double z6,
         double x7, double y7, double z7,
         double x8, double y8, double z8);
    Cube(const Peak& A,
         const Peak& B,
         const Peak& C,
         const Peak& D,
         const Peak& A1,
         const Peak& B1,
         const Peak& C1,
         const Peak& D1);
    explicit Cube(double a);
    Cube();	// default constructor
    ~Cube(); // destructor
};


#endif //PRACTICE_CUBE_H
