#include <iostream>
using namespace std;

int main()
{
    cout << "y = -x\n";
    for (int x = -10; x <= 10; x++)
    {
        cout << "x = " << x << "\t y = " << -x << endl;
    }
    return 0;
}