float f(float x)
{
    if (x < 0)
        return pow(pow(x, 3) + 1, 2);
    else if (x < 1)
        return 0;
    else
        return fabs(x * x - 5 * x + 1);
}