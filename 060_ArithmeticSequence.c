/**
* Exercise: 60. n-th Term of Arithmetic Sequence
* Description: Prompt for a, d & n and calculate a(n)
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Prints a(n) to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int a, d, n, a_n;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of d:");
    scanf("%d",&d);
    printf("Enter the value of n:");
    scanf("%d",&n);

    a_n = a + (d * n);
    
    printf("The value of a(n) is %d", a_n);


   return EXIT_SUCCESS;
}