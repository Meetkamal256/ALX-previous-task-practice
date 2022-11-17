#include "main.h"
#include <stdlib.h>

/**
 * a function that returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter
 *@str: char string to be copied
 *@strdup: duplicate a string using malloc
 * returns a pointer to the new duplicated string..
 */

char *_strdup(char *str)
{
    char *a;
    int i, c;
    if (str == NULL)
    {
        return NULL;
    }
     if (a == NULL)
    {
        return NULL;
    }
    /*while loop to calculate string length*/
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    /*determine the size and allocate enough memory space for it and 1 byte is added
    to account for the null terminator*/
    a = malloc(i * sizeof(char) + 1);
    if (a == NULL)
    {
        return NULL;
    }
    /*make a copy str to a new location*/
    for (c = 0; str[c] != '\0'; c++)
    {
         a[c] = str[c];
    }
    a[c] = '\0';
    return (a);
}
