#include <stdio.h>

/**
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
    int i;
    int j;
    if (size <= 0)
        return (-1);
    for (i = 0; i < size; i++)
    {
        j = (cmp)(array[i]);

        if (j == 1)
            return (i);
    }
    return (j);
}
