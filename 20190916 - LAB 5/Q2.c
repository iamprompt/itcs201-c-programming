#include <stdio.h>

int main()
{
    int i, n, f2, f0, f1;
    f0 = 0;
    f1 = 1;
    scanf("%d", &n);

    printf("%d %d ",f0, f1);

    i = 2;

    do
    {
        f2 = f0 + f1;
        printf("%d ", f2);
        //printf("(%d %d %d) ", f0,f1, f2);
        f0 = f1;
        f1 = f2;
        i++;
    } while (i < n);
    
}