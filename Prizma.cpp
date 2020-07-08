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
        cout << "Ńďčńîę äĺéńňâčé:\n1 - Íŕéňč ďëîůŕäü\n2 - Íŕéňč âĺđřčíű\n3 - Íŕéňč ďëîůŕäü ăđŕíĺé\n4 - Íŕéňč îáú¸ě\n0 - Âűőîä"<<endl<<endl;
        cin >> z;
        switch (z)
        {
        case 0: {exit = true; break; }
        case 1:
            cout << "Ââĺäčňĺ ďëîůŕäü îńíîâŕíč˙: ";
            cin >> a;
            cout << "Ââĺäčňĺ ďĺđčěĺňđ îńíîâŕíč˙: ";
            cin >> b;
            cout << "Ââĺäčňĺ âűńîňó: ";
            cin >> c;
            Pl = 2 * a + b * c;
            cout << "S=" << Pl << endl << endl;
            break;
        case 3:
            cout << "Ââĺäčňĺ äëčíó ńňîđîíű 1: ";
            cin >> e;
            cout << "Ââĺäčňĺ äëčíó ńňîđîíű 2: ";
            cin >> f;
            Gr = 4 * e * f;
            cout << "S=" << Gr << endl << endl;
            break;
        case 4:
            cout << "Ââĺäčňĺ ďëîůŕäü îńíîâŕíč˙: ";
            cin >> g;
            cout << "Ââĺäčňĺ âűńîňó: ";
            cin >> h;
            Ob = g * h;
            cout << "V=" << Ob << endl << endl;
            break;
        default:
            cout << "Ňŕęîăî äĺéńňâč˙ íĺň" << endl << endl;
            break;
        } 

    } 
   system("pause");
   return 0;
}
