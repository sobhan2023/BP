#include <stdio.h>
int main() {
	printf("hi , welcome to BMI app \n");
	printf("we show your information with this table ");
	printf("\n BMI Values\n Underweight: less than 18.5 \n Normal:between 18.5 and 24.9 \n Overweight:  between 25 and 29.9 \n Obese:       30 or greater  ");
	printf("\n now write your weight in kilograms ");
	float weight =1 , height =1, allnumber;
	scanf("%f",  &weight);
	printf("\n write your height in meter ");
   scanf("%f", &height);
   if (height == 0) {
   	printf("\n write true number ");
   	scanf("%f", &height);}
   allnumber = weight / ( height * height);
   printf("\n your BMI Number %f ", allnumber);
       if ( allnumber > 30){
   		printf("Obese");}
   		
   	else if ( allnumber > 24.9){
   		printf("Overweight");}
   		
   	else if (allnumber > 18.5){
   		printf("Normal");
   		}
   	else if ( allnumber <= 18.5) {
   		printf("Underweight");
   		}
   	
	return 0;
}