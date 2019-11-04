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
  int temp;

  if (side2 > side3) // Swap Less Value to the Left
  {
    temp = side2;
    side2 = side3;
    side3 = temp;
  }

  if (side1 > side3) // Swap Less Value to the Left
  {
    temp = side1;
    side1 = side3;
    side3 = temp;
  }
  if (side1 > side2) // Swap Less Value to the Left
  {
    temp = side1;
    side1 = side2;
    side2 = temp;
  }

  // printf("%.2f %.2f %.2f\n", side1, side2, side3);

  if (side1 + side2 > side3)
  {
    return 1;
  }
  else
  {
    return -1;
  }
}