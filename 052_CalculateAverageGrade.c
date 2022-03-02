/**
* Exercise: 50.  Calculate Average Grade
* Description: Prompt for three grades then calculate the average
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Prints average to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    // declare some vars
    int grade1, grade2, grade3, total;
    double average;
    // prompt for some values
    printf("Enter a grade: ");
    scanf("%d", &grade1);
    printf("Enter a grade: ");
    scanf("%d", &grade2);
    printf("Enter a grade: ");
    scanf("%d", &grade3);
    // calc the average
    total = grade1 + grade2 + grade3;
    average = (double)total/3.0;
    // print the result
    printf("The average grade is %lf", average);

    return EXIT_SUCCESS;
}