
/*Разработка набора библиотек работы с геометрическими данными
Куб, пирамида, параллелепипед, призма (вершины, грани, объем, площадь поверхности)*/

#include <iostream>
#include "Shape.h"
#include "Pyramid.h"
#include "Peak.h"

using namespace std;

Shape* figure;
Peak* peaks;
double volume;
double all_square;
double brink;

void figure_props()
{
	cout << "The Volume: " << volume << "\n";
	cout << "The All Square: " << all_square << "\n";
	cout << "The Brink: " << brink << "\n";
	cout << "The Peaks: \n";
	for (int i = 0; i < 5; i++)
	{
		//cout << "Point: " << peaks[i].get_name() << "\n";
		cout << "X = " << peaks[i].get_x() << "\n";
		cout << "Y = " << peaks[i].get_y() << "\n";
		cout << "Z = " << peaks[i].get_z() << "\n\n";
	}
}

int main()
{
	int choose;
	bool App = true;
	while (App)
	{
		bool IsChosen = true;
		cout << "\nChoose an option:\n";

		cout << "1 - Pyramid\n";
		cout << "2 - Prism***\n";
		cout << "3 - Parallelepiped***\n";
		cout << "4 - Cube***\n";
		cout << "0 - Exit\n";
		cout << "\nYour choise <<< "; cin >> choose; cout << "\n";
		while (IsChosen)
		{
			switch (choose)
			{
			case 0:
			{
				IsChosen = false;
				App = false;
				break;
			}
			case 1:
			{
				figure = new Pyramid();
				double a, h;
				cout << "\nEnter side and height <<< "; cin >> a; cin >> h; cout << "\n";
				volume = figure->find_volume(a, h);
				all_square = figure->find_all_square(a, h);
				brink = figure->find_brink(a, h);
				peaks = figure->find_peaks(a, h);
				cout << "\nYour Pyramid: \n";
				figure_props();
				break;
			}
			default:
			{
				cout << "\nAn Error has been occured!";
				break;
			}
			}
		}
	}
	return 0;
}