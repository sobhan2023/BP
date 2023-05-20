#include <stdio.h>
int main()
{
	long int x1, x2, x3, x4, x5, i = 11;
	long int y1, y2, y3, y4, y5;
	long int x11, x22, x33, x44, x55;
	long int n, x, white = 0, black = 0;
	scanf("%ld", &n);
	x1 = n % 10;
	x11 = x1;
	n = n / 10;
	x2 = n % 10;
	x22 = x2;
	n = n / 10;
	x3 = n % 10;
	x33 = x3;
	n = n / 10;
	x4 = n % 10;
	x44 = x4;
	n = n / 10;
	x5 = n % 10;
	x55 = x5;
	for (int i = 1; i <= 11; i++)
	{
		if (i == 11)
		{
			printf("Lose");
			break;
		}
		scanf("%ld", &x);
		y1 = x % 10;
		x = x / 10;
		y2 = x % 10;
		x = x / 10;
		y3 = x % 10;
		x = x / 10;
		y4 = x % 10;
		x = x / 10;
		y5 = x % 10;
		if (x1 == y1 && x2 == y2 && x3 == y3 && x4 == y4 && x5 == y5)
		{
			printf("Win");
			break;
		}
		if (x1 == y1)
		{
			black += 1;
			x1 = "a";
			y1 = "b";
		}
		if (x2 == y2)
		{
			black += 1;
			x2 = "a";
			y2 = "b";
		}
		if (x3 == y3)
		{
			black += 1;
			x3 = "a";
			y3 = "b";
		}
		if (x4 == y4)
		{
			black += 1;
			x4 = "a";
			y4 = "b";
		}
		if (x5 == y5)
		{
			black += 1;
			x5 = "a";
			y5 = "b";
		}
		if (x1 == y2 || x1 == y3 || x1 == y4 || x1 == y5)
		{
			white += 1;
		}
		if (x2 == y1 || x2 == y3 || x2 == y4 || x2 == y5)
		{
			white += 1;
		}
		if (x3 == y1 || x3 == y2 | x3 == y4 || x3 == y5)
		{
			white += 1;
		}
		if (x4 == y1 || x4 == y2 || x4 == y3 || x4 == y5)
		{
			white += 1;
		}
		if (x5 == y2 || x5 == y3 || x5 == y4 || x5 == y1)
		{
			white += 1;
		}
		printf("%ld ", white);
		printf("%ld ", black);
		printf("\n");
		white = 0;
		black = 0;
		x1 = x11;
		x2 = x22;
		x3 = x33;
		x4 = x44;
		x5 = x55;
	}
}