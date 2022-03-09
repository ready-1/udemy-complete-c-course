/**
* Exercise: 64. Driving Time
* Description: Prompt for speed and distance and return travel time
* Course: Udemy Complete C Programming Course - C Language for Students by Vlad Budnitski
* Github Repo: https://github.com/ready-1/udemy-complete-c-course
* Required Args: None
* Returns/Outputs: Prints driving time to the console
* Compiler Commands: clang -std=c17 -fdiagnostics-color=always -g <source_file> -0 <out_file>
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    // travelTime = distance / speed

    float distance, speed, travelTime;

    printf("How far will you travel? ");
    scanf("%f", &distance);

    printf("How fast will you drive? ");
    scanf("%f", &speed);

    travelTime = distance / speed;

    printf("It will take you %0.2f hours to reach your destination.", travelTime);


    return EXIT_SUCCESS;
}