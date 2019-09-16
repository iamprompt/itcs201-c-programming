#include <stdio.h>

int main(){
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (i % 2 != 0)
        {
            int iprint;
            iprint = i - 32;
            printf("%c", iprint);
        } else
        {
            printf("%c", i);
        }
        if (i < 'z')
        {
            printf(", ");
        }
    }   
}