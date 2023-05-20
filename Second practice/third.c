#include <stdio.h>
int main()
{
	int input,resultt=0,x1=1,x2=1,x3=1;
	scanf("%d",&input);
	while(input>x3){
		x3 = x2 + x1;
		x1 = x2;
		x2 = x3;
		if(input % x3 ==0){
		 	resultt = 1;
		 	break;}
	}
		if(resultt ==1){printf("NO");}
		else{printf("YES");}
}