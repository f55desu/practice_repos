#include "Prizma.h"
#include <iostream>
#include <string>
using namespace std;

int prizma::Check()
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
    setlocale(LC_ALL, "RUS");
    int z;
    double a,b,c,e,f,g,h;
    double Pl,Gr,Ob;
    bool exit = false;
    while (!exit)
    {
        cout << "Список действий:\n1 - Найти площадь\n2 - Найти вершины\n3 - Найти площадь граней\n4 - Найти объём\n0 - Выход"<<endl<<endl;
        cin >> z;
        switch (z)
        {
        case 0: {exit = true; break; }
        case 1:
            cout << "Введите площадь основания: ";
            cin >> a;
            cout << "Введите периметр основания: ";
            cin >> b;
            cout << "Введите высоту: ";
            cin >> c;
            Pl = 2 * a + b * c;
            cout << "S=" << Pl << endl << endl;
            break;
        case 3:
            cout << "Введите длину стороны 1: ";
            cin >> e;
            cout << "Введите длину стороны 2: ";
            cin >> f;
            Gr = 4 * e * f;
            cout << "S=" << Gr << endl << endl;
            break;
        case 4:
            cout << "Введите площадь основания: ";
            cin >> g;
            cout << "Введите высоту: ";
            cin >> h;
            Ob = g * h;
            cout << "V=" << Ob << endl << endl;
            break;
        default:
            cout << "Такого действия нет" << endl << endl;
            break;
        } 

    } 
   system("pause");
   return 0;
}