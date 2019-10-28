// Sum all elements in 2D arrays (n x m) Only Odd Column
#include <stdio.h>

int main()
{
  int nrow, ncol;
  scanf("%d %d", &nrow, &ncol);

  int myarr[nrow][ncol];
  int sum = 0;

  for (int row = 0; row < nrow; row++)
  {
    for (int col = 0; col < ncol; col++)
    {
      scanf("%d", &myarr[row][col]);
    }
  }

  for (int row = 0; row < nrow; row++)
  {
    for (int col = 0; col < ncol; col++)
    {
      if (col % 2 == 0)
      {
        sum += myarr[row][col];
      }
    }
  }
  printf("%d\n", sum);

  return 0;
}