/**
* Exercise: 60. Sum of an Arithmetic Sequence
* Description: Prompt for params and calculate sum
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Prints sum to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    // sum = (a_1 + a_n) * (n/2)
    int sum, a_1, a_n, d, n;

    printf("Enter the value of a:");
    scanf("%d",&a_1);
    printf("Enter the value of d:");
    scanf("%d",&d);
    printf("Enter the value of n:");
    scanf("%d",&n);

    a_n = a_1 + ((n - 1) * d);
    sum = (a_1 + a_n) * (n/2);
    
    printf("The sum of a(n) is %d", sum);


    return EXIT_SUCCESS;
}