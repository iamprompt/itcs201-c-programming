#include <stdio.h>

char isLeapYear(int year);

int main()
{
    int year;
    char LeapYear;

    scanf("%d", &year);

    LeapYear = isLeapYear(year);
    printf("%c\n", LeapYear);

    return 0;
}

char isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0 && year % 400 != 0) || (year % 400 == 0))
    {
        return 'L';
    }
    else
    {
        return 'C';
    }
}