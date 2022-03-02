/**
* Exercise: 53. Milestone 2 - Weather Station A
* Description: Prompt for a temp in C and conver to F
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Print Temp (f) to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    // c * 1.8 + 32
    // declare some vars
    double temp_c, temp_f;
    // prompt for some inputs
    printf("Enter a temperature in Celsius: ");
    scanf("%lf", &temp_c);
    // calc the new temp
    temp_f = (temp_c * 1.8) + (double)32;
    // print the temp in f
    printf("%.2lfc is %.2lff", temp_c, temp_f);

    return EXIT_SUCCESS;
}