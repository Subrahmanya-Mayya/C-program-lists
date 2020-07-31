#include<stdio.h>

//working of long

int main(){
	int a; //integer
	long int b; //integer using long keyword
	double c; //double
	long double d; //double using long keyword
		printf("Size of int : %zu bytes\nSize of long int : %zu bytes\nSize of double : %zu bytes\nSize of long double : %zu bytes",sizeof(a),sizeof(b),sizeof(c),sizeof(d));

	return 0;	
}