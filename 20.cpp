#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "n = ";
    cin >> n;
    do
        cout << i++ << " \t";
    while (i <= n);
    return 0;
}