//
// Created by mailj on 7/9/2020.
//

#ifndef PRACTICE_SHAPE_H
#define PRACTICE_SHAPE_H

#include "Peak.h"

/// This class is the parent class for all child shape classes. It stores the general properties of all shapes.
class Shape {
protected:
    double x0 = 0, y0 = 0, z0 = 0;  /// Reference system.

    double brink = 0;
    double all_square = 0;
    double volume = 0;

public:
    //sets:
    void set_brink(double my_brink);
    void set_all_square(double my_all_square);
    void set_volume(double my_volume);

    //gets:
    double get_brink(double a, double h) const;
    double get_all_square(double a, double h) const;
    double get_volume(double a, double h) const;

    //find methods
    virtual double find_face() = 0;
    virtual double find_facet() = 0;
    virtual double find_volume() = 0;
    virtual double find_all_square() = 0;
    virtual double find_brink() = 0;
    virtual Peak** find_peaks() = 0;

    virtual int getPeaksCount() const = 0;
};

#endif //PRACTICE_SHAPE_H
