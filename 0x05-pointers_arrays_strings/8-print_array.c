#include "main.h"
#include <stdio.h>

/**
 * a function that prints n elements of an array of integers, followed by a new line.
 * 
 * @ int type array pointer
 * @ int type integer
 */

void print_array(int *a, int n)
{
    for (n = 0; n < 5; n++)
    {
        if (n > 0)
        {
            printf(",");
            printf(" ");
        }
        printf("%d", a[n]);
    }
    printf("\n");
}
