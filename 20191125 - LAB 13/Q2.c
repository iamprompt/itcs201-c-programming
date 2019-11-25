#include <stdio.h>
#include <string.h>
#define N 11

int main()
{
    char str1[N], str2[N], str3[N];          // Declare
    char string[30];
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);
    // fgets(str1, N, stdin); // Input
    // fgets(str2, N, stdin); // Input
    // fgets(str3, N, stdin); // Input

    strcpy(string, str1);
    strcat(string, ",");
    strcat(string, str2);
    strcat(string, ",");
    strcat(string, str3);

    printf("%s\n", string);

    return 0;
}