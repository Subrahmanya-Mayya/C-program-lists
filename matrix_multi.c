#include<stdio.h>

int main()
{
  int c, d, p, q, m, n, k, tot = 0;
  int fst[10][10], sec[10][10], mul[10][10];

  printf(" Insert the number of rows and columns for first matrix: ");
  scanf("%d%d", &m, &n);

  printf("Insert your matrix elements : ");
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &fst[c][d]);
 
  printf("Insert the number of rows and columns for second matrix : ");
  scanf(" %d %d", &p, &q);

  if (n != p)
    printf(" Your given matrices cannot be multiplied with each other");
  else
  {
    printf(" Insert your elements for second matrix: ");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &sec[c][d] );

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          tot = tot + fst[c][k] * sec[k][d];
        }
        mul[c][d] = tot;
        tot = 0;
      }
    }
 
    printf(" Product of the matrices is: \n "); 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d \t", mul[c][d] );
      printf(" \n ");
    }
  }
  return 0;
}
