#include <stdio.h>
int main()
{
    char input;
    scanf("%c",&input);
    
    
    if(input == 'c'){
        double r,area;
        scanf("%lf",&r);
        area = r * r * 3.14159;
        printf("%.5lf",area);
    }
    
    
    else if(input == 'r'){
        double c,y,area;
        scanf("%lf %lf",&c,&y);
        area = c * y;
        printf("%.3lf",area);
    }
    return 0;
}
