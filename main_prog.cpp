/*Разработка набора библиотек работы с геометрическими данными
Куб, пирамида, параллелепипед, призма (вершины, грани, объем, площадь поверхности)*/

#include <iostream>
#include "geometry/Shape.h"
#include "geometry/figures/Pyramid.h"
#include "geometry/figures/Cube.h"
#include "geometry/figures/Prizm.h"
#include "geometry/figures/parallelepiped.h"

using namespace std;

Peak** peaks;
Shape* figure;
double volume;
double all_square;
double brink;
double face;
double facet;

void figure_props(const string& myFigure)
{
    cout << "\nYour " << myFigure << ": ";
    cout << "\nThe Volume: " << volume;
    cout << "\nThe All Square: " << all_square;
    cout << "\nThe Brink: " << brink;
    if (myFigure == "Parallelepiped")
    {
        cout << "\nThe Face: " << face;
        cout << "\nThe Facet: " << facet;
    }
    cout << "\nThe Peaks: ";
    for (int i = 0; i < figure->getPeaksCount(); i++)
    {
        cout << "\n\nPoint: " << peaks[i]->get_name();
        cout << "\nX = " << peaks[i]->get_x();
        cout << "\nY = " << peaks[i]->get_y();
        cout << "\nZ = " << peaks[i]->get_z();
    }
    cout<<"\n";
}

// stable program

int main()
{
    int choice;
    bool isRun = true;

    while (isRun) {
        cout << "\nChoose an option:";

        cout << "\n1 - Pyramid";
        cout << "\n2 - Prism";
        cout << "\n3 - Parallelepiped";
        cout << "\n4 - Cube";
        cout << "\n0 - Exit";
        cout << "\nYour choice <<< ";
        cin >> choice;

        switch (choice) 
        {
            case 0: 
            {
                isRun = false;
                break;
            }
            case 1: 
            {
                double a, h;
                cout << "\nEnter side <<< ";
                cin >> a;
                cout << "\nEnter height <<< ";
                cin >> h;

                figure = new Pyramid(a, h);
                volume = figure->find_volume();
                all_square = figure->find_all_square();
                brink = figure->find_brink();
                peaks = figure->find_peaks();

                figure_props("Pyramid");
                break;
            }
            case 2:
            {
                double a, b, h;
                cout << "\nEnter side <<< ";
                cin >> a;
                cout << "\nEnter the other side <<< ";
                cin >> b;
                cout << "\nEnter height <<< ";
                cin >> h;

                figure = new Prizm(a, b, h);
                volume = figure->find_volume();
                all_square = figure->find_all_square();
                brink = figure->find_brink();
                peaks = figure->find_peaks();

                figure_props("Prizm");
                break;
            }
            case 3:
            {
                double a, b, h;
                cout << "\nEnter side <<< ";
                cin >> a;
                cout << "\nEnter the other side <<< ";
                cin >> b;
                cout << "\nEnter height <<< ";
                cin >> h;

                figure = new parallelepiped(a, b, h);
                volume = figure->find_volume();
                face = figure->find_face();
                facet = figure->find_facet();
                brink = figure->find_brink();
                peaks = figure->find_peaks();
                all_square = figure->find_all_square();

                figure_props("Parallelepiped");
                break;
            }
            case 4:
            {
                double a;
                cout<<"\nEnter side <<< ";
                cin >> a;

                figure = new Cube(a);
                volume = figure->find_volume();
                all_square = figure->find_all_square();
                brink = figure->find_brink();
                peaks = figure->find_peaks();

                figure_props("Cube");
                break;
            }
            default: 
            {
                cout << "\nAn Error has been occurred!";
                break;
            }
        }
    }
    return 0;
}
