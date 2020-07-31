#include<stdio.h>
int main()
{
	int a[20],even=0,odd=0,n;
	float avg=0;
	printf("Enter how many elements : ");
	scanf("%d",&n);
	printf("\n");
	for(int i=0;i<n;i++){
		printf("Enter the element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			even = even + a[i];
		}
		else
		{
			odd = odd + a[i];
		}
		avg = avg + a[i];
	}
	avg = avg/n;
	printf("sum of even numbers = %d\nsum of odd numbers = %d\naverage of all numbers = %.2f",even,odd,avg);
	return 0;
}