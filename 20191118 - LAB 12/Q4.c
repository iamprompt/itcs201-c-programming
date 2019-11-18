#include <stdio.h>

int intersect(int *arr1, int *arr2, int n, int *out);
void sort(int *arr, int n);

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

    // Count Base on arr1
    int out[n];

    sort(arr1, n);
    int its = intersect(arr1, arr2, n, out);

    for (int i = 0; i < its; i++)
    {
        printf("%d ", out[i]);
    }

    return 0;
}

int intersect(int *arr1, int *arr2, int n, int *out)
{
    int count[n];
    // ARR1 Controller
    for (int i = 0; i < n; i++)
    {
        count[i] = 0;
        // ARR2 Controller
        for (int j = 0; j < n; j++)
        {
            if (*(arr1 + i) == *(arr2 + j))
            {
                count[i]++;
                *(arr2 + j) = "";
                // printf("Found %d\n", count[i]);
            }
        }
    }

    int its = 0;
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", count[i]);
        if (count[i] > 0)
        {
            *(out + its) = *(arr1 + i);
            its++;
        }
    }
    return its;
}

void sort(int *arr, int n)
{
    int count;
    do
    {
        count = 0;
        for (int i = 0; i < n; i++)
        {

            int j = (i == 0) ? i : i - 1;
            if (*(arr + j) > *(arr + i))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
            else
            {
                count++;
                // printf("Count order %d => %d %d\n", count, arr[j], arr[i]);
            }
        }

        /* for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n"); */
    } while (count != n);
}