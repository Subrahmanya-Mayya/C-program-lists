#include <stdio.h>
int main()
{
	int m, n, a[10][10], i, j, b[10][10];
	printf("Enter the size of the array (m×n)\n");
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("Enter %d row %d column value : ", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEntered Matrix\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == 0)
			{
				printf("| ");
			}
			printf("%d ", a[i][j]);
		}
		printf("|\n");
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	printf("\nTranspose of the Matrix\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (j == 0)
			{
				printf("| ");
			}
			printf("%d ", b[i][j]);
		}
		printf("|\n");
	}
	return 0;
}