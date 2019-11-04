#include <stdio.h>

int find_max(int n1, int n2);

int main()
{
    int n1, n2, max;
    scanf("%d %d", &n1, &n2);

    max = find_max(n1, n2);
    printf("%d\n", max);

    return 0;
}

int find_max(int n1, int n2)
{
    //if(n1>n2) return n1;
    //return n2;



    int max;
    if (n1 > n2)
    {
        max = n1;
    }
    else
    {
        max = n2;
    }
    return max;
}