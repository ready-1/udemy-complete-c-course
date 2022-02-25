/**
* Exercise: Section 7: Milestone #1
* Description: A simple hard coded calculator
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Prints + - * / % calculations to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include<stdio.h>
#include<stdlib.h>

int main() {

    // addition
    printf("%d + %d = %d\n", 5, 2, (5 + 2));

    // subtraction
    printf("%d - %d = %d\n", 5, 2, (5 - 2));
    
    // multiplication
    printf("%d x %d = %d\n", 5, 2, (5 * 2));
    
    // division
    printf("%d / %d = %d\n", 5, 2, (5/2));
    
    // mod
    printf("%d %% %d = %d\n", 5, 2, (5%2));

    return 0;
}