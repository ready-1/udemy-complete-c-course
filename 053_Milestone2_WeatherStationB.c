/**
* Exercise: 53. Milestone 2 - Weather Station B
* Description: Prompt for a temp in F and conver to c
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Print Temp (c) to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    // (f - 32) / 1.8
    // declare some vars
    double temp_c, temp_f;
    // prompt for some inputs
    printf("Enter a temperature in Fahrenheit: ");
    scanf("%lf", &temp_f);
    // calc the new temp
    temp_c = (temp_f - (double)32) / 1.8;
    // print the temp in f
    printf("%.2lff is %.2lfc", temp_f, temp_c);

    return EXIT_SUCCESS;
}