#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    int arr3[n];

    int i;

    // Initialize array
    for (i=0 ; i<n ; i++) {
        arr1[i] = (i * i) + 1;
    }
    for (i=0 ; i<n ; i++) {
        arr2[i] = i + arr1[i];
    }
    for (i=0 ; i<n ; i++) {
        arr3[i] = (i + 1) * (i + 2);
    }

    // Print array
    printf("arr1: ");
    for (i=0 ; i<n ; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("arr2: ");
    for (i=0 ; i<n ; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    printf("arr3: ");
    for (i=0 ; i<n ; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    // Determine average
    float sum = 0;
    for (i=0 ; i<n ; i++) {
        sum += arr1[i];
    }
    float avg = sum / n;
    
    float sum2 = 0;
    for (i=0 ; i<n ; i++) {
        sum2 += arr2[i];
    }
    float avg2 = sum2 / n;

    float sum3 = 0;
    for (i=0 ; i<n ; i++) {
        sum3 += arr3[i];
    }
    float avg3 = sum3 / n;

    printf("avg of arr1: %.2f\n", avg);
    printf("avg of arr2: %.2f\n", avg2);
    printf("avg of arr3: %.2f\n", avg3);

    // Count the number of even and odd numbers
    int n_even = 0;
    int n_odd = 0;
    for (i=0 ; i<n ; i++) {
        if (arr1[i] % 2) {
            n_odd++;
        } else {
            n_even++;
        }
    }
    printf("n_even and n_odd of arr1: %d %d\n", n_even, n_odd);
    n_even = 0;
    n_odd = 0;
    for (i=0 ; i<n ; i++) {
        if (arr2[i] % 2) {
            n_odd++;
        } else {
            n_even++;
        }
    }
    printf("n_even and n_odd of arr2: %d %d\n", n_even, n_odd);
    n_even = 0;
    n_odd = 0;
    for (i=0 ; i<n ; i++) {
        if (arr3[i] % 2) {
            n_odd++;
        } else {
            n_even++;
        }
    }
    printf("n_even and n_odd of arr3: %d %d\n", n_even, n_odd);

    return 0;
}