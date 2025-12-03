#include <iostream> //Библиотека ввода-вывода
using namespace std;

int main()
{
    double a, b, c;
    cout << "Введите три стороны треугольника: ";
    cin >> a >> b >> c;
    //Однострочная проверка и вывод
    cout << ((a + b > c && a + c > b && b + c > a) ?;
    cout << "Треугольник существует" : "Треугольник не существует") << endl;

    return 0;
}
