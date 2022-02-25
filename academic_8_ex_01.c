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
