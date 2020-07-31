#include <stdio.h>
int main()
{
	int n, a[50], temp;
	printf("Enter the size of array:");
	scanf("%d", &n);
	printf("Enter %d elements into array:", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("Array after sorting:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}