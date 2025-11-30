#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a;
    cout << "Введите длину стороны равностороннего треугольника";
    cin >> a;
    double R = a / sqrt(3);
    cout << fixed << setprecision(2);
    cout << " Радиус описанной окружности: " << R << endl;
    return 0;
}


