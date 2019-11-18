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

    printf("%d %d", max, min);

    return 0;
}

////////////////////////////////////////////////////////
//                 Start of your code                 //
////////////////////////////////////////////////////////

void find_max_min(int *arr, int n_elems, int *max, int *min)
{
    *max = arr[0];
    for (int i = 0; i < n_elems; i++)
    {
        max = (max < arr[i]) ? arr[i] : max;
        printf("Max is %d\n", max);
    }
    
}

////////////////////////////////////////////////////////
//                  End of your code                  //
////////////////////////////////////////////////////////