#include <stdio.h>
#include <string.h>
#define N 50

int main()
{
    char str1[N], str2[N];
    fgets(str1, N, stdin);
    fgets(str2, N, stdin);
    (strcmp(str1, str2) == 0) ? printf("1\n") : printf("0\n");
    return 0;
}