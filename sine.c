#include<stdio.h> 
#include<math.h> 
#define PI 3.142 
void main() 
{ 
	int i,degree; 
	float x,sum=0,term,numer,deno; 
	printf("USN : 4CB19CS104\n");
	printf("Enter the value of angle : "); 
	scanf("%d",&degree); 
	x=degree*(PI/180); 
	numer=x; 
	deno=1; 
	i=2; 
	do 
		{ 
			term=numer/deno; 
			numer=-numer*x*x; 
			deno=deno*i*(i+1); 
			sum=sum+term; 
			i=i+2; 
		}while(fabs(term)>=0.00001); 
printf("The sine of %d is %f\n",degree,sum); 
printf("The sine of %d using built in function is %f\n",degree,sin(x)); 
} 
