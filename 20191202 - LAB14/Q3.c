#include <stdio.h>

////////////////////////////////////////////////////////
//                 Start of your code                 //
////////////////////////////////////////////////////////

/*
    TODO: 
        1. Define a structure of structure to store 
        student information.

        2. Write two self-defined functions:
          2.1. get_info:   a function to get student
                           information from a terminal.
          2.2. print_info: a function to print student
                           information to a terminal.
        
        You can determine their function definition 
        from the code in the main function.
*/

#define MAX 16

struct dateOfbirth
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[MAX];
    char gender;
    float weight;
    float height;
    struct dateOfbirth DoB;
};

struct Student get_info()
{
    struct Student info;
    scanf(" %s", info.name);
    scanf(" %c", &info.gender);
    scanf("%f", &info.weight);
    scanf("%f", &info.height);
    scanf("%d", &info.DoB.day);
    scanf("%d", &info.DoB.month);
    scanf("%d", &info.DoB.year);

    return info;
};

void print_info(struct Student info)
{
    printf("%s (%c) w=%.1f h=%.1f dob=%d/%d/%d\n", info.name, info.gender, info.weight, info.height, info.DoB.day, info.DoB.month, info.DoB.year);
};

////////////////////////////////////////////////////////
//                  End of your code                  //
////////////////////////////////////////////////////////

int main()
{
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++)
    {
        students[i] = get_info();
    }

    for (int i = 0; i < n; i++)
    {
        print_info(students[i]);
    }

    return 0;
}