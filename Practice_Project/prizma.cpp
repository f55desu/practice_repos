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
        cout << "������ ��������:\n1 - ����� �������\n2 - ����� �������\n3 - ����� ������� ������\n4 - ����� �����\n0 - �����"<<endl<<endl;
        cin >> z;
        switch (z)
        {
        case 0: {exit = true; break; }
        case 1:
            cout << "������� ������� ���������: ";
            cin >> a;
            cout << "������� �������� ���������: ";
            cin >> b;
            cout << "������� ������: ";
            cin >> c;
            Pl = 2 * a + b * c;
            cout << "S=" << Pl << endl << endl;
            break;
        case 3:
            cout << "������� ����� ������� 1: ";
            cin >> e;
            cout << "������� ����� ������� 2: ";
            cin >> f;
            Gr = 4 * e * f;
            cout << "S=" << Gr << endl << endl;
            break;
        case 4:
            cout << "������� ������� ���������: ";
            cin >> g;
            cout << "������� ������: ";
            cin >> h;
            Ob = g * h;
            cout << "V=" << Ob << endl << endl;
            break;
        default:
            cout << "������ �������� ���" << endl << endl;
            break;
        } 

    } 
   system("pause");
   return 0;
}