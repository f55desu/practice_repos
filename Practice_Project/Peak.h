#pragma once
class Peak
{
private:
	double x, y, z;
public:
	//sets:
	void set_x(double x);
	void set_y(double y);
	void set_z(double z);
	//gets:
	double get_x();
	double get_y();
	double get_z();
	//construct:
	Peak(double x, double y, double z);
	Peak(const Peak& peak);
	Peak();
};

