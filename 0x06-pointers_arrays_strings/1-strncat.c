#include "main.h"

/**
 * a function that concatenates two strings.
 * @dest: string to be concatenated
 * @src: char string
 * 
 * @n: number of elements to concatenate in
 */

    char *_strncat(char *dest, char *src, int n)
{
    int i;
    int j;
    
    for (i = 0; dest[i] !='\0'; i++);
    for (j = 0; src[j] != '\0' && j < n; j++, i++)
    {
        dest[i] = src[j];
    }
    dest[i] = '\0';
    return (dest);
}
