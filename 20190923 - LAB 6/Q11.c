#include <stdio.h>

int main() {
    int n;
    while (n<2 || n>9)
    {
        scanf("%d", &n);
    }
    
    for (int line = 0; line < n; line++)
    {
     for (int i = 0; i < line+1; i++)
        {
            printf("%d%d ", line+1,i+1);
        }

        printf("\n");
    }
    return 0;
}