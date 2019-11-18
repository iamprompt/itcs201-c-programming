#include <stdio.h>

void swap(int *x, int *y);

void sort_values(int *x, int *y, int *z);

int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    sort_values(&n1, &n2, &n3);

    printf("%d %d %d\n", n1, n2, n3);
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

void sort_values(int *x, int *y, int *z)
{

    if (*y > *z) swap(y, z);
    if (*x > *z) swap(x, z);
    if (*x > *y) swap(x, y);
}