int b[10];
int *p = &b[0];
for (int i = 0; i < 10; i++)
{
    cout << "b[" << i << "] = ";
    cin >> *p++;
}

p = &b[0];
for (int i = 0; i < 10; i++)
    cout << "b[" << i << "] = " << *p++ << endl;