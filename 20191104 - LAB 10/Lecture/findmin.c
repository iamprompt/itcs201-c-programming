#include <stdio.h>

int findmin(int n1, int n2)
{
  int min;
  if (n1 > n2)
  {
    min = n2;
  }
  else
  {
    min = n1;
  }
  return min;
}

int main()
{
  int n1, n2, n3, n4, n5, min;
  scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
  
  min = findmin(n1, n2);
  min = findmin(min, n3);
  min = findmin(min, n4);
  min = findmin(min, n5);

  printf("Min is %d", min);
}