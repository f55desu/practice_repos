#pragma once
class Pyramid
{
private:
	double brink; //������� �����
	double all_square; //������� �����������
	double volume; //�����
	double a, h;
public:
	//sets:
	void set_brink(double my_brink);
	void set_all_square(double my_all_square);
	void set_volume(double my_volume);
	//gets:
	double get_brink(double a, double h);
	double get_all_square(double a, double h);
	double get_volume(double a, double h);
	
	//construct:
};

