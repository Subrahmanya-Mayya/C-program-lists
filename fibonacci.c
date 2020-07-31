#include<stdio.h>
int fibonacci(int);
int main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Fibonacci series of %d is %d",n,fibonacci(n));
	return 0;
}
int fibonacci(int n){
	if(n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}