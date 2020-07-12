//
// Created by mailj on 7/9/2020.
//

#ifndef PRACTICE_PEAK_H
#define PRACTICE_PEAK_H

#include <string>

using namespace std;

/// This class stores the coordinates and vertex names of shapes.
class Peak {
private:
    double x, y, z;
    string name;

public:
    //sets:
    void set_x(double x);
    void set_y(double y);
    void set_z(double z);
    void set_name(const string& name);
    //gets:
    double get_x() const;
    double get_y() const;
    double get_z() const;
    string get_name();
    //construct:
    Peak(double x, double y, double z);
    Peak(const Peak& peak);
    Peak();
    ~Peak(); // destructor
};

#endif //PRACTICE_PEAK_H
