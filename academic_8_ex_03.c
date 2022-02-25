/**
* Exercise: Section 8: X Shape
* Description: Print an "X" made out of asterisks
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Prints a big "X" of asterisks to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>

void printX(){

    printf("*     *\n");
    printf(" *   *\n");
    printf("  * *\n");
    printf("   *\n");
    printf("  * *\n");
    printf(" *   *\n");
    printf("*     *\n");
}

int main()
{
    printX();
    return 0;
}
