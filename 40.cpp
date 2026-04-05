#include <iostream>
using namespace std;

int main()
{
    int a[20];
    int n;
    cout << "n = ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        if (a[i] < 0)
            a[i] = 0;
    }
    for (int i = 0; i < n; ++i)
        cout << a[i] << "\t";
    return 0;
}