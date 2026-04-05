int **b = new int *[4];
for (int i = 0; i < 2; ++i)
    b[i] = new int[5];
for (int i = 0; i < 4; ++i)
    for (int j = 0; j < 5; ++j)
    {
        cout << "b[" << i << "][" << j << "] = ";
        cin >> *(*(b + i) + j);
    }

for (int i = 0; i < 4; ++i, cout << endl)
    for (int j = 0; j < 5; ++j)
        cout << "b[" << i << "][" << j << "] = " << *(*(b + i) + j) << "\t";