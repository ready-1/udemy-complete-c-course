/**
* Exercise: Section 8: Print rectangle of asterisks
* Description: Prints a statically sized rectangle of asterisks
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Prints a rectangle to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>

void printRectangle(int h, int w)
{

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
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
