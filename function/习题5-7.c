double st_mul(int x)
{
    if (x == 1 || x == 0)
        return 1;
    else
        return x * st_mul(x - 1);
}
double funcos(double e, double x)
{
    int flag = 1;
    double item = 0;
    double value = 0;
    int i = 0;
    do
    {
        value = value + pow(x, i) * flag / st_mul(i);
        item = pow(x, i) / st_mul(i);
        flag = -flag;
        i += 2;
    } while (item >= e);
    return value;
}