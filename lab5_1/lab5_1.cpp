#include <iostream>
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double F, a, b, c, x;
    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;
    cout << "Введіть c: ";
    cin >> c;
    cout << "Введіть x: ";
    cin >> x;
    if (x < 1 && c != 0)
    {
        if (b != 0)
        {
            F = ((a * pow(x, 2)) / b) + (pow(b, 2) / c);
        }
        else
        {
            cout << "Не задовільняє ОДЗ" << endl;
        }
    }
    else if (x > 1 || c == 0)
    {
        if ((x - c) != 0)
        {
            F = (fabs(x - a) / (x - c));
        }
        else
        {
            cout << "Не задовільняє ОДЗ" << endl;
        }
    }
    else 
    {
        if (pow(c, 2) != 0)
        {
            F = (10 / pow(c, 2));
        }
        else
        {
            cout << "Не задовільняє ОДЗ" << endl;
        }
    }
    cout << "F = " << F << endl;
    system("pause");

    return 0;
}
