#include <stdio.h>
int main()
{
	float x1,x2,x3,xc,y1,y2,y3,yc;
	float matristri,matrisch1,matrisch2,matrisch3;
	scanf("%f %f",&x1,&y1);
	scanf("%f %f",&x2,&y2);
	scanf("%f %f",&x3,&y3);
	scanf("%f %f",&xc,&yc);
	
	matristri = (x1 * (y2  - y3)) + (-y1 * (x2-x3)) + ((x2*y3)- (y2 *x3));
	matristri = matristri / 2.0;
	
	
	matrisch1 = (xc * (y2  - y3)) + (-yc * (x2-x3)) + ((x2*y3)- (y2 *x3));
	matrisch1 = matrisch1 / 2.0;
	
	
	matrisch2 = (x1 * (yc  - y3)) + (-y1 * (xc-x3)) + ((xc*y3)- (yc *x3));
	matrisch2 = matrisch2 / 2.0;
	
	
	matrisch3 = (x1 * (y2  - yc)) + (-y1 * (x2-xc)) + ((x2*yc)- (y2 *xc));
	matrisch3 = matrisch3 / 2.0;

	
	if (matristri <= -matristri){matristri = -matristri;}
		
	if (matrisch1 <= -matrisch1){matrisch1 = -matrisch1;}
	
	if (matrisch2 <= -matrisch2){matrisch2 = -matrisch2;}
	
	if (matrisch3 <= -matrisch3){matrisch3 = -matrisch3;}

	if(matrisch1 ==0 || matrisch2==0 || matrisch3 == 0){printf("on");}
	
   else if (matristri == matrisch1  + matrisch2 + matrisch3){printf("in");}
   
   else if (matristri < matrisch1 + matrisch2 + matrisch3){printf("out");}
}