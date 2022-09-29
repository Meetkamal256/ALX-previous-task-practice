#include "main.h"
#include <stdio.h>

/**
 *function that swaps the values of two integers.
 * 
 */
    void swap_int(int *a, int *b)
{
    int c;
    printf ("a = %d, b = %d", a,b);
    a = a + b;
    b = a -b;

}