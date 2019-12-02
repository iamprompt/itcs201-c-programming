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

////////////////////////////////////////////////////////
//                  End of your code                  //
////////////////////////////////////////////////////////

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for (int i=0 ; i<n ; i++) {
        students[i] = get_info();
    }

    for (int i=0 ; i<n ; i++) {
        print_info(students[i]);
    }

    return 0;
}