#include "main.h"
#include <stdlib.h>

/**
 * a function that creates an array of chars, and initializes it with a specific char.
 * returns NULL if size = 0
 * returns a pointer to the array or NULL if it fails..
 *
 */

char *create_array(unsigned int size, char c)
{
    char *ptrarray;
    unsigned int i;
    /*allocate enough space in memory for all array elements */
     ptrarray = (char *)malloc(size * sizeof(char));
    /* put char c in each of the allocated spaces in memory */                                                               
        for (i = 0; i < size; i++)
        {
            ptrarray[i] = c;
        }
         if (size == 0)
        return NULL;
    else if
        (ptrarray == NULL) return NULL;
    else
     ptrarray[i] = '\0';
        return (ptrarray);
}