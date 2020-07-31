#include<stdio.h>

int main(){
	int intSize;
	float floatSize;
	char charSize;
	double doubleSize;
	
	printf("Size of int : %d bytes\nSize of float : %d bytes\nSize of char : %d bytes\nSize of double : %d bytes",sizeof(intSize),sizeof(floatSize),sizeof(charSize),sizeof(doubleSize));
}