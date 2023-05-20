#include <stdio.h>
int main()
{
	int y=1,z= 0,resultt =0,x;
	scanf("%d",&x);
	while(x != 0){
		y =(int) x / 2;
		z = (int)x % 2;
		x = y;
		resultt += z;
	}
	printf("%d",resultt);
	return 0;
}