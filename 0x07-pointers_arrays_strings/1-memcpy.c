#include "main.h"

/**
 * a function that copies memory area.
 * @dest: char array to copy into
 * @src: char array to copy from.
 * @n: number of elements to copy
 * return a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    return (dest);
}
