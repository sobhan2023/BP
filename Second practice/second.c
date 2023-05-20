#include <stdio.h>
int main()
{
	int x,x0r,n;
	scanf("%d",&n);
	x0r = 0;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		x0r = x0r ^ x;
	}
	printf("%d",x0r);
}