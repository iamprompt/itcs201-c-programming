#include <stdio.h>

void compute_avg(int *arr, int n, float *avg);

int main()
{
    int n;
    scanf("%d", &n);
    
    int numarr[n];
    float sum = 0, avg;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numarr[i]);
    }

    compute_avg(numarr, n, &avg);

    printf("%.2f\n", avg);
    
    return 0;
}

void compute_avg(int *arr, int n, float *avg)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr+i);
    }
    
    *avg = sum / n;
}