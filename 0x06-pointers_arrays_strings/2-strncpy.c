#include "main.h"
#include <stdio.h>

/**
 *  a function that copies a string.
 * @dest - 
 * @src - char string
 *
 * return 
 */
    char *_strncpy(char *dest, char *src, int n)
{
    int i;
    for (i = 0; src[i] != '\0' && i < n; i++)
    {
        dest[i] = src[i];
    }
    for(; i < n; i++)
    {
    dest[i] = '\0';
    }
    return(dest);
}

