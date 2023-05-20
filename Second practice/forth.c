#include <stdio.h>
int main()
{
    int i = 1, z, y, factorial = 1, n;
    double power = 1, reslutt = 0, x;
    scanf("%d %lf", &n, &x);
    for (int y = 1; y <= n; y++)
    {
        z = (2 * y - 1);
        while (i <= z)
        {
            power = (x * power) / i;
            i++;
        }
        if (y % 2 == 0)
        {
            reslutt -= power;
        }
        else
        {
            reslutt += power;
        }
        i = 1;
        power = 1;
    }
    printf("%.4lf", reslutt);
}