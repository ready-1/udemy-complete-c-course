/**
* Exercise: Section 8: Asterisks Pattern
* Description: Prints a rectangle of asterisks with some positions replaced with numerals
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Prints a modified asterisk filled rectangle to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>

void printRectangle(int h, int w)
{

    for (int i = 0; i < h; i++)
    {
        // print the numbers
        for (int j = 0; j < (i + 1); j++)
        {
            printf("%d", (j+1));
        }
        // print the stars
        for (int j = i; j < w-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    printRectangle(5, 10);
    return 0;
}
