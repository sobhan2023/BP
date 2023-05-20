
#include <stdio.h>

int main(){
    int p1,p2,e1,e2;
    scanf("%d %d %d %d",&p1,&e1,&p2,&e2);
    if (p1>=0 && e1>=0 && p2>=0 && e2>=0){
        if(p1+p2 > e1+e2){printf("perspolis");}
        else if(e1 + e2 > p1 + p2){printf("esteghlal");}
        else if(e1+e2 == p1+p2){
            if (e1*2+e2  >  p2*2 + p1){printf("esteghlal");}
            else if (e1*2+e2  <  p2*2 + p1){printf("perspolis");}
            else{printf("penalty");}
        }
    }
    return 0;
}
