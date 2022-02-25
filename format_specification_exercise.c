/**
* Exercise: Section 7: Format Specifications
* Description: Several excersises to study printf format specs
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Various string formattings to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include<stdio.h>
#include<stdlib.h>

int main() {

    printf("\n\nWe have 100 coins in the bank\n");
    printf("We have %d coins in the bank\n", 100);

    printf("\n\nWe have 125.7 coins in the bank\n");
    printf("We have %f coins in the bank\n", 125.7);

    printf("\n\nYear = 2020\n");
    printf("Year = %d\n", 2020);

    printf("\n\nYour average grade is 95.13\n");
    printf("Your average grade is %f\n", 95.13);

    printf("\n\nnunm1 = 5, num2 = 7, sum = 12\n");
    printf("num1 = %d, num2 = %d, sum = %d", 5, 7, 5 + 7);

    printf("\n\nnum1 = 5.2, num2 = 7.2, sum = 9.5\n");
    printf("num1 = %f, num2 = %f, sum = %f", 5.2, 7.3, 9.5);

    printf("\n\nnum1 = 5, num2 = 3, sub = 2 \n");
    printf("num1 = %d, num2 = %d, sub = %d \n", 5, 3, 5-3);
    
    printf("\n\na = 3, b = 5, sum = a + b = 8 \n");
    printf("a = %d, b = %d, sum = a + b = %d \n", 3, 5, 3+5);
    
    printf("\n\na = 3, b = 5, sum = 3 + 5 = 8 \n");
    printf("a = %d, b = %d, sum = %d + %d = %d \n", 3, 5, 3, 5, 3+5);
    
    printf("\n\na = 3, b = 5, sum = a + b = 3 + 5 = 8 \n");
    printf("a = %d, b = %d, sum = a + b = %d + %d = %d \n", 3, 5, 3, 5, 3+5);





    return 0;
}