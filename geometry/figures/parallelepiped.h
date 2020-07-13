#ifndef PRACTICE_PARALLELEPIPED_H
#define PRACTICE_PARALLELEPIPED_H

#include "../Shape.h"

class parallelepiped : public Shape {
private:
    const int peaksCount = 8;
    Peak** peaks = new Peak * [peaksCount];
    double width = 0;
    double height = 0;
    double lengt = 0;


public:
    int getPeaksCount() const override
    {
        return this->peaksCount;
    }
    double find_volume() override
    {
        return width * height * lengt;
    }
    double find_all_square() override
    {
        return 2 * find_brink() + 2 * find_face() + 2 * find_facet();
    }
    double find_brink() override
    {
        return width * height;
    }
    double find_face() override
    {
        return width * length;
    }
    double find_facet() override
    {
        return height * length;
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
        peaks[0]->set_z(z0 + width);

        // B
        peaks[1]->set_x(x0 + length);
        peaks[1]->set_y(y0);
        peaks[1]->set_z(z0 + width);

        // C
        peaks[2]->set_x(x0 + length);
        peaks[2]->set_y(y0);
        peaks[2]->set_z(z0);

        // D
        peaks[3]->set_x(x0);
        peaks[3]->set_y(y0);
        peaks[3]->set_z(z0);

        // A1
        peaks[4]->set_x(x0);
        peaks[4]->set_y(y0 + height);
        peaks[4]->set_z(z0 + width);

        // B1
        peaks[5]->set_x(x0 + length);
        peaks[5]->set_y(y0 + height);
        peaks[5]->set_z(z0 + width);

        // C1
        peaks[6]->set_x(x0 + length);
        peaks[6]->set_y(y0 + height);
        peaks[6]->set_z(z0);

        // D1
        peaks[7]->set_x(x0);
        peaks[7]->set_y(y0 + height);
        peaks[7]->set_z(z0);

        return peaks;
    }

    //constructors:
    parallelepiped(double x1, double y1, double z1,
        double x2, double y2, double z2,
        double x3, double y3, double z3,
        double x4, double y4, double z4,
        double x5, double y5, double z5,
        double x6, double y6, double z6,
        double x7, double y7, double z7,
        double x8, double y8, double z8);
    parallelepiped(const Peak& A,
        const Peak& B,
        const Peak& C,
        const Peak& D,
        const Peak& A1,
        const Peak& B1,
        const Peak& C1,
        const Peak& D1);
    explicit parallelepiped(double a, double b, double c);
    parallelepiped();	// default constructor
    ~parallelepiped(); // destructor
};


#endif //PRACTICE_PARALLELEPIPED_H

