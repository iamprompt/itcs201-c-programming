#include <stdio.h>

int n;

void printArr(int *arr)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

float findAvg(int *arr)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float avg = sum / n;

    return avg;
}

int countOddEven(char type, int *arr)
{
    int n_even = 0;
    int n_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2)
        {
            n_odd++;
        }
        else
        {
            n_even++;
        }
    }
    return (type == 'O') ? n_odd : n_even;
}

int main()
{
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    int arr3[n];

    int i;

    // Initialize array
    for (i = 0; i < n; i++)
    {
        arr1[i] = (i * i) + 1;
    }
    for (i = 0; i < n; i++)
    {
        arr2[i] = i + arr1[i];
    }
    for (i = 0; i < n; i++)
    {
        arr3[i] = (i + 1) * (i + 2);
    }

    // Print array
    printf("arr1: ");
    printArr(arr1);

    printf("arr2: ");
    printArr(arr2);

    printf("arr3: ");
    printArr(arr3);

    // Determine average

    printf("avg of arr1: %.2f\n", findAvg(arr1));
    printf("avg of arr2: %.2f\n", findAvg(arr2));
    printf("avg of arr3: %.2f\n", findAvg(arr3));

    // Count the number of even and odd numbers
    printf("n_even and n_odd of arr1: %d %d\n", countOddEven('E', arr1), countOddEven('O', arr1));
    printf("n_even and n_odd of arr2: %d %d\n", countOddEven('E', arr2), countOddEven('O', arr2));
    printf("n_even and n_odd of arr3: %d %d\n", countOddEven('E', arr3), countOddEven('O', arr3));

    return 0;
}