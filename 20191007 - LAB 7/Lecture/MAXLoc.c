#include <stdio.h>

int main()
{
    int n = 0;
    int i, max;
    max = 0;
    scanf("%d", &n);
    int myarr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myarr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (myarr[max] < myarr[i])
        {
            max = i;
        }
    }

    printf("Location %d = %d", max + 1, myarr[max]);
}