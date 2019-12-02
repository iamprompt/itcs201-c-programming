#include <stdio.h>
#include <string.h>

struct info
{
    int id;
    char name[51];
    char gender;
    float midterm;
    float final;
};

int main()
{
    struct info STUDENT[4];

    // Student I
    STUDENT[0].id = 1;
    strcpy(STUDENT[0].name, "Joe");
    STUDENT[0].gender = 'M';
    STUDENT[0].midterm = 2.5;
    STUDENT[0].final = 4.5;

    // Student II
    STUDENT[1].id = 3;
    strcpy(STUDENT[1].name, "Mint");
    STUDENT[1].gender = 'F';
    STUDENT[1].midterm = 4;
    STUDENT[1].final = 5;

    // Student III
    STUDENT[2].id = 5;
    strcpy(STUDENT[2].name, "Faye");
    STUDENT[2].gender = 'F';
    STUDENT[2].midterm = 9;
    STUDENT[2].final = 8.5;

    // Student IV
    STUDENT[3].id = 6;
    strcpy(STUDENT[3].name, "Dark");
    STUDENT[3].gender = 'M';
    STUDENT[3].midterm = 5.5;
    STUDENT[3].final = 5.5;

    for (int i = 0; i < 4; i++)
    {
        printf("%d %s %c %.1f %.1f\n", STUDENT[i].id, STUDENT[i].name, STUDENT[i].gender, STUDENT[i].midterm, STUDENT[i].final);
    }
    return 0;
}