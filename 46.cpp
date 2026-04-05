#include <iostream>
using namespace std;

int **creat(int n, int m)
{
    int **mas = new int *[n];
    for (int i = 0; i < n; ++i)
        mas[i] = new int[m];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            mas[i][j] = i + j;
    return mas;
}

void print(int **mas, int n, int m)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cout << mas[i][j] << "\t";
        cout << endl;
    }
}

int main()
{
    int n = 5, m = 5;
    int **a = creat(n, m);
    print(a, n, m);
    for (int i = 0; i < n; ++i)
        delete[] a[i];
    delete[] a;
    return 0;
}