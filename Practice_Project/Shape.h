#include "Peak.h"

#pragma once
class Shape
{
protected:
	Peak* peaks;	// declaration of an objects array from class "Peak"
	double x0, y0, z0;	// Coordinate system position

	double brink;
	double all_square;
	double volume;

public:
	//sets:
	void set_brink(double my_brink);
	void set_all_square(double my_all_square);
	void set_volume(double my_volume);
	//gets:
	double get_brink(double a, double h);
	double get_all_square(double a, double h);
	double get_volume(double a, double h);
	//find methods
	virtual double find_volume(double a, double h);
	virtual double find_all_square(double a, double h);
	virtual double find_volume(double a, double h);
	virtual double find_brink(double a, double h);
	virtual Peak* find_peaks(double a, double h);
};


