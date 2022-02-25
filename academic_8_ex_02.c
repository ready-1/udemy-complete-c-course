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
