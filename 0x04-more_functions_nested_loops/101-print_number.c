#include "main.h"
#include <stdio.h>

/**
 * a function that prints an integer.
 * return 0 always.
 */
void print_number(int n)
{
    int i;
    if (n > 0)
    {
        for (i = 1; i >= n; i++)
        {
            printf("%d", i)
        }
    else (n < 0)
    {
        for (i = -1; i >= n; i--)
        printf("%d", i);
    }
    return 0;       
    
}