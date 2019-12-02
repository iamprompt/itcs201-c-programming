#include <stdio.h>
#include <stdlib.h>

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

struct Student get_info(FILE *file)
{
    struct Student info;
    fscanf(file, " %s", info.name);
    fscanf(file, " %c", &info.gender);
    fscanf(file, "%f", &info.weight);
    fscanf(file, "%f", &info.height);
    fscanf(file, "%d", &info.DoB.day);
    fscanf(file, "%d", &info.DoB.month);
    fscanf(file, "%d", &info.DoB.year);

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
    FILE *stream;
    stream = fopen("input.txt", "r");

    /* if (stream == NULL)
    {
        printf("The file was not successfully opened.\n");
        printf("Please check that the file currently exists.\n");
        exit(1);
    }
    else
        printf("The file was opened.\n"); */

    int n;

    fscanf(stream, "%d", &n);
    // printf("N = %d\n", n);

    struct Student students[n];
    /* for (int i = 0; i < n; i++)
    {
        fscanf(stream, "%s %c %f %f %d %d %d", students[i].name, &students[i].gender, &students[i].weight, &students[i].height, &students[i].DoB.day, &students[i].DoB.month, &students[i].DoB.year);
    } */

    for (int i = 0; i < n; i++)
    {
        students[i] = get_info(stream);
    }

    for (int i = 0; i < n; i++)
    {
        print_info(students[i]);
    }

    fclose(stream);

    return 0;
}