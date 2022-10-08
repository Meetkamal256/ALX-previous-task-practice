#include "main.h"

/**
 * a function that concatenates two strings.
 *@dest: char string to concatenate to.
 *@src: char string
 *return pointer to resulting string dest.
 */

   char *_strcat(char *dest, char *src)
{
    int i , c;
    for (i = 0; dest[i] != '\0'; i++)
    {
        continue;
    }
    for (c = 0; src[c] != '\0'; c++)
    {
        dest[i] = src[c];
    
    }
    dest[i] = '\0';
    return(dest);
}
