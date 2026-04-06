#include <iostream>
using namespace std;

int main() 
{
    double x, y; // координаты точки
    cout << "введите координаты точек (x y): ";
    cin >> x >> y;
    //проверяем положение точки относительно прямой y=-x
    double result = y + x;
    if (result > 0) 
    {
        cout << "точка лежит выше прямой y=-x" << endl;
    } else if (result < 0) 
    {
        cout << "точка лежит ниже прямой y=-x" << endl;
    } else 
    {
        cout << "точка лежит на прямой y=-x" << endl;
    }
    return 0;
}
