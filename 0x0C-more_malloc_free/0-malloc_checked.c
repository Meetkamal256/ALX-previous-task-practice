#include "main.h"
#include <stdlib.h>

/**
 *  a function that allocates memory using malloc.
 * @b size of malloc to be created
 * returns void.
 */

    void *malloc_checked(unsigned int b)
{
    int *pointer;
    unsigned int x;
    pointer = (int *)malloc(x);
    if(!pointer)
    exit(98);
    return pointer;    
}
