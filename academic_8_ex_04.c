/**
* Exercise: Section 8: Print your birth year
* Description: Prints the year of your birth based on a simple calculation
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Prints the year of your birth to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int age = 53;
    int this_year = 2022;
    printf("You are %d years old and were born in %d.  %d - %d = %d", age, (this_year - age), this_year, age, (this_year - age));
    return 0;
}
