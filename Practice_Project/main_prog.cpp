
/*Разработка набора библиотек работы с геометрическими данными
Куб, пирамида, параллелепипед, призма (вершины, грани, объем, площадь поверхности)*/

#include <iostream>
#include "Shape.h"
#include "Pyramid.h"

using namespace std;

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
				bool IsPyramid = true;
				int Pyramid_choose;
				cout << "\nWhat do you want?: ";
				cout << "\n1 - Create a new pyramid";
				cout << "\n2 - Edit an existing pyramid";
				cout << "\nYour choise <<< "; cin >> Pyramid_choose; cout << "\n";
				while (IsPyramid)
				{
					switch (Pyramid_choose)
					{
					case 1:
						Shape * figure = new Pyramid();
						break;
					}
					case 2:
					{
						double a, h;
						cout << "\nEnter side and height <<< "; cin >> a; cin >> h; cout << "\n";
					}
					//case 3:
				}
				break;
			}
			}
		}
	}
	return 0;
}