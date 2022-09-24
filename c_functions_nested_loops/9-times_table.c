#include "main.h"
#include <stdio.h>
/**
 * a c function that prints the 9 times table starting with 0
 * return 0 always
 */
void times_table(void)
{
    int r, c;

    printf("==========================\n");
    printf("12x12 MULTIPLICATION TABLE\n");
    printf("==========================\n");
    for (r = 0; r <= 9; r++)
    {
        for (c = 0; c <= 9; c++)
        {
            if (r <= 9 && c <= 9)
            {
                printf(",");
                printf("..");
            }
            printf("%d", r * c);
        }
        printf("\n");
    }
    printf("press any key to exit..");
}