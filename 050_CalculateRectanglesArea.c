/**
* Exercise: 50.  Calculate a rectangle's Area
* Description: Prompt for height & width then calculate the area
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Prints area to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    // declare some vars
    double height, width, area;
    // prompt for some values
    printf("Enter the height of the rectangle: ");
    scanf("%lf", &height);
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);
    // calc the area
    area = height * width;
    // print the result
    printf("The area of a rectangles measuring %lf x %lf is %lf", height, width, area);

    return EXIT_SUCCESS;
}