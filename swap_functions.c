#include<stdio.h>

void swap(int a , int b){
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swaping a = %d and b = %d",a,b);
}

int main(){
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("Before swaping a = %d and b = %d\n",a,b);
	swap(a,b);
	return 0;
}