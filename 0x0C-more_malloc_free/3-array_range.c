#include "main.h"
#include <stdlib.h>
/**
 * a function that creates an array of integers.
 * 
 * 
 */

    int *array_range(int min, int max)
{
    int *arr;
    int i;
    if (min > max) /*verify that max is bigger than min*/
    return NULL;
    max = max - min;
    arr = (int *)malloc((max - min + 1) * sizeof(int));/*reserve memory space using malloc*/
    for ( i = 0; min <= max; i++)/*generate an array of int from min to max included*/
    {
        arr[i] = min;
        min++;
    }
    return arr;
}
