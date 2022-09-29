#include <stdio.h>

/**
 * @ a program that prints the 12 times table
 *
 */

int main()
{
    int i;
    // printf("%5s", "X");
    // for (i = 1; i <= 15; i++)
    // {
    //     printf("%5d", i);
    // }
    // printf("\n");

    for (int j = 1; j <= 12; j++)
    {
        printf("%2d", j);
        for (int k = 1; k <= 12; k++)
        {
            if (j <= 12 && k <= 12)
            {
                printf(" ");
                printf(",");
                printf("...");
            
            }
            printf("%2d", j * k);
        }
        printf("\n");
    }
    return 0;
}
