#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z;
    int a, b = 0, mab10 = 0, resultt = 0, d = 0, maby = 0;
    scanf("%d %d", &x, &y);
    scanf("%d", &z);
    while (z != 0)
    {
        a = z % 10;
        z = z / 10;
        mab10 = pow(x, b) * a + mab10;
        b++;
    }
    while (mab10 > 0)
    {
        maby = (mab10 % y) * pow(10, d) + maby;
        mab10 = mab10 / y;
        d++;
    }
    printf("%d", maby);
}
