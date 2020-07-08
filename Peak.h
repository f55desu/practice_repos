#pragma once
#include <string>

using namespace std;

class Peak
{
private:
	double x, y, z;
	string name;
public:
	//sets:
	void set_x(double x);
	void set_y(double y);
	void set_z(double z);
	void set_name(string name);
	//gets:
	double get_x();
	double get_y();
	double get_z();
	string get_name();
	//construct:
	Peak(double x, double y, double z);
	Peak(const Peak& peak);
	Peak();
};

