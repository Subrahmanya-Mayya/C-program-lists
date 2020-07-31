#include <stdio.h>
int main()
{
	int n, a[100], sum = 0;
	printf("Enter the nth natural number:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 1;
		sum = sum + a[i];
	}
	printf("Sum of %d natural numbers:%d", n, sum);
}