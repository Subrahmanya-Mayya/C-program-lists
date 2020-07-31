#include <stdio.h>

int main()
{
	// Grade Points
	const int O = 10, S = 9, A = 8, B = 7, C = 6, D = 5, E = 4, F = 0;
	// Credit Points
	//input vars
	char cycle;
	int math;
	// Scan Pcycle Or Ccycle
	printf("Enter the cycle [p/c] : ");
	scanf("%c",&cycle);
	//check the cycle
	if(cycle=='p'||cycle=='P'){
		printf("\n\t_____________");
		printf("\t|Physics Cycle|");
		printf("\t_____________\n");
		printf("\nEnter marks of 18MAT11 : ");
		scanf("%d",&math);
	}
	else if(cycle=='c'||cycle=='C'){
		printf("\tChemistry cycle");
	}
	else{
		printf("please enter correct cycle");
	}
	return 0;
}