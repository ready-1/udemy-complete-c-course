/**
* Exercise: 62. Salary Calulator
* Description: Prompt for hourly rate and hours per month and return monthly gross pay
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Prints monthly pay to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    // monthly_pay = hours_per_month * hourly_rate

    int hours_per_month;
    double monthly_pay, hourly_rate;

    printf("How many hours per month do you work? ");
    scanf("%i", &hours_per_month);

    printf("What is your hourly rate? ");
    scanf("%lf", &hourly_rate);

    monthly_pay = hours_per_month * hourly_rate;

    printf("Your gross pay is $%0.2lf", monthly_pay);


    return EXIT_SUCCESS;
}