#include <iostream>
using namespace std;

int main()
{
    cout << "y = -x\n";
    for (int x = -10; x <= 10; x++) //цикл x от -10 до 10 с шагом 1
    {
        cout << "x = " << x << "\t y = " << -x << endl; //выводим x и y = -x
    }
    return 0;
}
