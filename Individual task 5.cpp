#include <iostream>
using namespace std;

int main() 
{
    double x, y;    // координаты точки
    double r;       // радиус круга
    cout << "Введите радиус круга: ";
    cin >> r;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;
    double dist2 = x*x + y*y;
    double r2 = r*r;
    if (dist2 < r2) //проверяем меньше ли дистанция радиуса
    {  
        cout << "Точка лежит внутри" << endl;
    }
    else 
    if (dist2 == r2) //проверяем дистанция равна ли радиусу
    { 
        cout << "Точка лежит на границе" << endl;
    }
    else 
    { 
        cout << "Точка лежит за пределами" << endl;
    }
    return 0;
}
