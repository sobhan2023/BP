#include <stdio.h>
int main(){
    long int x,y,r,resultx,resulty,relictx,relicty,total;
    scanf("%ld %ld %ld",&x,&y,&r);
        resultx = x / r;
        resulty = y / r;
        relictx = x % r;
        relicty = y % r;
    if (x >=1 && y>=1 && r >=1){
    	if(relicty != 0){
    		resulty = resulty + 1;
    	}
    	if(relictx != 0){
    		resultx = resultx + 1;
    	}
    	total = resulty * resultx;
    	printf("%ld",total);
    }
}
