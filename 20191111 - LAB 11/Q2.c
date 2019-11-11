#include <stdio.h>

#define N 10
int DATA[N] = {1, 6, -7, 0, 14, 55, 95, -41, 7, 33};

int find_index(int v)
{

    int found_index;

    ////////////////////////////////////////////////////////////////////////
    //                        Start of your code                          //
    ////////////////////////////////////////////////////////////////////////

    /*
        TODO: Write an algorithm to find the index or the position of 
              the input value `v` in the `DATA` array. The index of value
              `v` must be stored in `found_index`.
    */

    for (int i = 0; i < N; i++)
    {
        if (v == DATA[i])
        {
            found_index = i;
            break;
        }
        else
        {
            found_index = -1;
        }
    }

    ////////////////////////////////////////////////////////////////////////
    //                         End of your code                           //
    ////////////////////////////////////////////////////////////////////////

    return found_index;
}

int main()
{
    int target, found_index;
    scanf("%d", &target);

    ////////////////////////////////////////////////////////////////////////
    //                        Start of your code                          //
    ////////////////////////////////////////////////////////////////////////

    /*
        TODO: Write a program that uses the `find_index` function above to
              determine whether the input `target` is in the `DATA` array.
              Then print out the results as specified in the lab sheet.
    */

    found_index = find_index(target);

    if (found_index == -1)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Found at %d\n", found_index);
    }

    ////////////////////////////////////////////////////////////////////////
    //                         End of your code                           //
    ////////////////////////////////////////////////////////////////////////

    return 0;
}