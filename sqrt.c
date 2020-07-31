#include<stdio.h> 
void main() 
{ 
	float number,sqroot,temp; 
	printf("Enter a Positive Number:"); 
	scanf("%f",&number);
	sqroot=number/2; 
	temp=0; 
	while(sqroot!=temp) 
	{ 
		temp=sqroot; 
		sqroot=(number/sqroot+sqroot)/2; 
	} 
printf("Square root of %f is %f\n",number,sqroot); 
}