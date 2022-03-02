/**
* Exercise: 48. Calculate Your Year of birth
* Description: Calculate the user's year of birth based on input current year and age
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Prints calculated year of birth to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    //  init some vars
    int curr_year;
    int birth_year;
    int age;

    // get some info
    printf("What is the current year? ");
    scanf("%d", &curr_year);
    printf("What is your age? ");
    scanf("%d", &age);

    // do the calc
    birth_year = curr_year - age;

    // print it out
    printf("You were born in %d.", birth_year);
    
    return EXIT_SUCCESS;
}