#include <stdio.h>
int main()
{
	int n, array[100], i, search, loc = -1, mid, b = 0, e;
	printf("Enter how many elements :");
	scanf("%d", &n);
	printf("Enter the elements \n");
	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);
	printf("Enter the element to be searched:");
	scanf("%d", &search);
	e = n - 1;
	while (b <= e)
	{
		mid = (b + e) / 2;
		if (search == array[mid])
		{
			loc = mid;
			break;
		}
		else if (search < array[mid])
		{
			e = mid - 1;
		}
		else
			b = mid + 1;
	}
	if (loc >= 0)
		printf("%d found at location %d.\n", search, 
		loc + 1);
	else
		printf("Not found! %d isn't present in the list.\n", search);
}