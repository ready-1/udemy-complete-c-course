/**
* Exercise: 45. Variable Code Example #1 - Average Grade
* Description: Prompts for two grades from the console and calculates the 
    average grade
* Course: Udemy Complete C Programming Course - C Language for Students 
*   by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Prints average grade to console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file>
*    -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int grade1;
    int grade2;
    
    printf("\nEnter the first grade: ")
    ;
    scanf("%d", &grade1);
    printf("\nEnter the second grade: ");
    scanf("%d", &grade2);

    printf("\nYour average is %d", ((grade1 + grade2) / 2));

   return EXIT_SUCCESS;
}