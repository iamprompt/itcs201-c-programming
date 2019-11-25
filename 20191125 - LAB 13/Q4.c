#include <stdio.h>
#include <string.h>
#define N 21

int main()
{
    struct Student
    {
        char firstname[N];
        char lastname[N];
        int age;
        float weight;
    };

    struct Student profile;

    scanf("%s", profile.firstname);
    scanf("%s", profile.lastname);
    scanf("%d", &profile.age);
    scanf("%f", &profile.weight);

    printf("%s %s, %d, %.2f", profile.firstname, profile.lastname, profile.age, profile.weight);

    return 0;
}