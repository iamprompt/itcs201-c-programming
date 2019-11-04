#include <stdio.h>

float findavg(int n1, int n2)
{
  float sum, avg;
  sum = n1 + n2;
  avg = sum / 2;
  return avg;
}

int main()
{
  float n1, n2, avg;
  scanf("%f %f", &n1, &n2);

  avg = findavg(n1, n2);

  printf("Average is %.2f\n", avg);
}