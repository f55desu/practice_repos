#include "Prizma.h"
#include <iostream>
#include <string>
using namespace std;

int prizma::Check() // list only
{
    int A;
    cin >> A;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(32767, '\n');
        cin >> A;
    }
    return A;
} 

int main()
{
    int z;
    double a, b, c, e, f, g, h, i, o, p;
    double Pl, Ver[24], Gr, Ob;
    bool exit = false;
    while (!exit)
    {
        cout << "Select the required:\n1 - Find the area\n2 - Find the vertices\n3 - Find the area of faces\n4 - Find the volume\n0 - Exit" << endl << endl;
        cin >> z;
        switch (z)
        {
        case 0: {exit = true; break; }
        case 1:
            cout << "Enter the area of ground: ";
            cin >> a;
            cout << "Enter the perimeter of ground: ";
            cin >> b;
            cout << "Enter the height: ";
            cin >> c;
            Pl = 2 * a + b * c;
            cout << "S=" << Pl << endl << endl;
            break;
        case 2:
            cout << "Enter the sides" << endl;
            cout << "Enter the widht: ";
            cin >> i;
            cout << "Enter the height: ";    
            cin >> p;
            cout << "Enter the lenght: ";   
            cin >> o;

            Ver[0] = 0; // vertex 1
            Ver[1] = 0;
            Ver[2] = 0;

            Ver[3] = 0; // vertex 2
            Ver[4] = 0;
            Ver[5] = 0 + o;

            Ver[6] = 0 + i; // vertex 3
            Ver[7] = 0;
            Ver[8] = 0 + o;

            Ver[9] = 0 + i; // vertex 4
            Ver[10] = 0;
            Ver[11] = 0;

            Ver[12] = 0; // vertex 5
            Ver[13] = 0 + p;
            Ver[14] = 0;

            Ver[15] = 0; // vertex 6
            Ver[16] = 0 + p;
            Ver[17] = 0 + o;

            Ver[18] = 0 + i; // vertex 7
            Ver[19] = 0 + p;
            Ver[20] = 0 + o;

            Ver[21] = 0 + i; // vertex 8
            Ver[22] = 0 + p;
            Ver[23] = 0;

            cout << "Vertex 1 " << "{" << Ver[0] << ";" << Ver[1] << ";" << Ver[2] << "}" << endl;
            cout << "Vertex 2 " << "{" << Ver[3] << ";" << Ver[4] << ";" << Ver[5] << "}" << endl;
            cout << "Vertex 3 " << "{" << Ver[6] << ";" << Ver[7] << ";" << Ver[8] << "}" << endl;
            cout << "Vertex 4 " << "{" << Ver[9] << ";" << Ver[10] << ";" << Ver[11] << "}" << endl;
            cout << "Vertex 5 " << "{" << Ver[12] << ";" << Ver[13] << ";" << Ver[14] << "}" << endl;
            cout << "Vertex 6 " << "{" << Ver[15] << ";" << Ver[16] << ";" << Ver[17] << "}" << endl;
            cout << "Vertex 7 " << "{" << Ver[18] << ";" << Ver[19] << ";" << Ver[20] << "}" << endl;
            cout << "Vertex 8 " << "{" << Ver[21] << ";" << Ver[22] << ";" << Ver[23] << "}" << endl << endl;
            break;
        case 3:
            cout << "Enter the lenght of side 1: ";
            cin >> e;
            cout << "Enter the lenght of side 2: ";
            cin >> f;
            Gr = 4 * e * f;
            cout << "S=" << Gr << endl << endl;
            break;
        case 4:
            cout << "Enter the area of ground: ";
            cin >> g;
            cout << "Enter the height: ";
            cin >> h;
            Ob = g * h;
            cout << "V=" << Ob << endl << endl;
            break;
        default:
            cout << "Wrong action!" << endl << endl;
            break;
        }

    }
    system("pause");
    return 0;
}
