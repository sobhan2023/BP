#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b,&c);
    if(a > 0 && b > 0 && c > 0){
        if(a < 360 && b < 360 && c < 360){
            if(a+b+c == 180){
                printf("Yes");}
            else{printf("No");}
        }
        else{
            printf("No");
        }
    }
    else{
        printf("No");
    }

    return 0;
}
