int main()
{
    float a, b, h, x;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "h = ";
    cin >> h;
    cout << "x\tf(x)\n";
    for (x = a; x <= b; x += h)
        cout << x << "\t" << f(x) << endl;
    return 0;
}