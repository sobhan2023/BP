#include <stdio.h>
int main()
{
	int l , r, i,z=1,x=0;
	scanf("%d %d",&l,&r);
	i = (r - l + 1) / 2 ;
	if( (l + r)%2==1 && (r>=l)){
		printf("YES\n");
		while((r-l+1)>=z){
			if(l%2!=0){
				printf("%d ",l);
			}
			else{ 
				x = l;
				printf("%d\n",x);}
			l++;}
	}
	else{printf("NO");}
}