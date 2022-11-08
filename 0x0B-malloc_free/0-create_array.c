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
    unsigned int count;
    /*allocate enough space in memory for all array elements */
    ptrarray = (char *)malloc(size * sizeof(char));
    /* put char c in each of the allocated spaces in memory */                                                               
        for (count = 0; count < size; count++)
    {
        /* a loop is used which is intialized with a counter variable 0,
        the loop counter checks if count < size and assigns char c to the specific allocated
        space on memory, if counter is less than size it is incremented and the loop exits when
        it reaches the terminating null character */
        ptrarray[count] = c;
    }
    if (size == 0)
        return NULL;
    else if
        (ptrarray == NULL) return NULL;
    else
     ptrarray[count] = '\0';
        return (ptrarray);
}