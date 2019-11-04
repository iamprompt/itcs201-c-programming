#include <stdio.h>

int isTriangle(float side1, float side2, float side3);

int main()
{
  float side1, side2, side3;
  int validation;
  scanf("%f %f %f", &side1, &side2, &side3);

  validation = isTriangle(side1, side2, side3);
  printf("%d\n", validation);

  return 0;
}

int isTriangle(float side1, float side2, float side3)
{
  int min, mid, max;
  min = side1;
  if (min > side2)
  {
    min = side2;
  }
  
  
}