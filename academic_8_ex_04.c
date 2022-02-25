#include <stdio.h>
#include <stdlib.h>


int main()
{
    int age = 53;
    int this_year = 2022;
    printf("You are %d years old and were born in %d.  %d - %d = %d", age, (this_year - age), this_year, age, (this_year - age));
    return 0;
}
