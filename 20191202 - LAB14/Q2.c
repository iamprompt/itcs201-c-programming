#include <stdio.h>
#include <string.h>

#define MAX 16

struct info
{
    int id;
    char name[MAX];
    char gender;
    float midterm;
    float final;
    float score;
};

int main()
{
    int n;
    scanf("%d", &n);

    struct info STUDENT[n];

    float totalscore = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &STUDENT[i].id);
        scanf(" %s", STUDENT[i].name);
        scanf(" %c", &STUDENT[i].gender);
        scanf("%f", &STUDENT[i].midterm);
        scanf("%f", &STUDENT[i].final);
        STUDENT[i].score = STUDENT[i].midterm + STUDENT[i].final;
        totalscore += STUDENT[i].score;
    }

    float average = totalscore / n;

    printf("%.1f\n", average);

    for (int i = 0; i < n; i++)
    {
        if (STUDENT[i].score > average)
        {
            printf("%d %s %c %.1f %.1f\n", STUDENT[i].id, STUDENT[i].name, STUDENT[i].gender, STUDENT[i].midterm, STUDENT[i].final);
        }
    }
    return 0;
}