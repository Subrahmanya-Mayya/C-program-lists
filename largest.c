#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("Enter how many elements : ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++){
		printf("Enter the element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		if(a[0] < a[i]){
			a[0] =a[i];
		}
	}
	printf("Largest element in the list is %d",a[0]);
	return 0;
}