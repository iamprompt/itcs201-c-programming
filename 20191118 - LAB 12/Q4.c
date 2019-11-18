#include <stdio.h>

int intersect(int *arr1, int *arr2, int n, int *out);

int main()
{
    int n;
    scanf("%d", &n);

    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int out[n];

    intersect(arr1, arr2, n, out);

    return 0;
}

int intersect(int *arr1, int *arr2, int n, int *out)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {   
        for (int j = 0; j < n; j++)
        {
            if (*(arr1 + i) == *(arr2 + j))
            {
                printf("Heyyyyyy!!!\n");
                *(out + count) = *(arr1 + i);
            }
        }  
        printf("Hey123!!!\n");  
    }
}