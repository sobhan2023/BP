#include <stdio.h>
#include <math.h>
int main()
{
	int z, w, full, empty, plus = 0,bg=0;
	double r, n;
	scanf("%lf", &n);
	if ((int)n <= 70 && (int)n >= 3)
	{
		r = ceil(0.5 + n / 4);
		w = (int)n;
		plus = 0;
		full = ceil(w / 2);
		empty = ceil(n / 4);
		if (((r - 1) * 4) + 2 == w || (4 * (r - 1) + 1 == w))
		{
			empty -= 1;
			plus = 2;
		}
		for (int q = 0; q < (r - 1); q++)
		{
			for (int i = 0; i < 2 * w; i++)
			{
				if (i < empty)
				{
					printf(" ");
				}
				if (i >= empty && empty + full > i)
				{
					printf("*");
				}
				if (i >= empty + full && empty * 3 + full + plus > i)
				{
					printf(" ");
				}
				if (i >= empty * 3 + full + plus && empty * 3 + full * 2 + plus > i)
				{
					printf("*");
				}
			}
			if (q < (r - 2))
			{
				printf("\n");
				full = full + 2;
				empty = empty - 1;
			}
		}

		printf("\n");
		for (int i = 1; i <=(2 * w)-bg; i++)
		{
			if ((4 * (r - 1) + 1 == w))
			{
				if (i % (w) == 0)
				{
					bg =2;
					printf(" ");
					printf(" ");
				}
				printf("*");
			}
			else
			{
				printf("*");
			}
		}
		for (int i = 1; i <= (int)n; i++)
		{
			printf("\n");
			for (int h = 1; h < i; h++)
			{
				printf(" ");
			}
			z = (w * 2) - 1;
			w -= 1;
			for (int y = 1; y <= z; y++)
			{
				printf("*");
			}
		}
	}
	if ((int)n == 2)
	{
		for (int i = 0; i < 3; i++)
		{
			if (i == 0)
			{
				printf("*");
				printf(" ");
				printf("*");
			}
			if (i == 1)
			{
				printf("*");
				printf("*");
				printf("*");
			}
			if (i == 2)
			{
				printf(" ");
				printf("*");
				printf(" ");
			}
			if (i < 2)
			{
				printf("\n");
			}
		}
	}
}