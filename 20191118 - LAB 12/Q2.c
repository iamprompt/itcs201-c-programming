#include <stdio.h>

void find_max_min(int *arr, int n_elems, int *max, int *min);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i=0 ; i<n ; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;

    // TODO: call the function `find_max_min` here
    find_max_min(arr, n, &max, &min);

    printf("%d %d", max, min);

    return 0;
}

////////////////////////////////////////////////////////
//                 Start of your code                 //
////////////////////////////////////////////////////////

void find_max_min(int *arr, int n_elems, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i = 0; i < n_elems; i++)
    {
        *max = (*max < arr[i]) ? arr[i] : *max;
        *min = (*min > arr[i]) ? arr[i] : *min;
    }
    
}

////////////////////////////////////////////////////////
//                  End of your code                  //
////////////////////////////////////////////////////////