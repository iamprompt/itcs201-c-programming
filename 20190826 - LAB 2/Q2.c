#include <stdio.h>

int main()
{
    int secin, hr, min, sec;
    scanf("%d",&secin);
    hr = secin /3600;
    min = (secin / 60) - (hr * 60);
    sec = secin - (hr * 3600) - (min * 60);
    printf("%d:%d:%d\n",hr,min,sec);
    return 0;
}