#include <stdio.h>

int main()
{
    int firstnum, lastnum;
    int i;

    firstnum = 100;
    lastnum = 200;

    if (firstnum > lastnum)
    {
        for (i = firstnum; i >= lastnum; i--)
    {
        printf("%d ", i);
    }
    }

    if (firstnum < lastnum)
    {
        for (i = firstnum; i <= lastnum; i++)
        {
            printf("%d ", i);
        }
        
    }
    

    
}