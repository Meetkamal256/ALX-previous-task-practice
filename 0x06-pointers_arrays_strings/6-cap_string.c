#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * a function that changes all lowercase letters of a string to uppercase.
 * @n: char string to be capitalized
 *
 * return void
 */

char *cap_string(char *n)
{
    int i;
    char array1[] = ",;.!?\"\n \t(){}";
    
    for (i = 0; n[i] != '\0'; i++)
    {
        if (n[i] >= 97 && n[i] <= 122)
        {
            for (int j = 0; n[j] != '\0'; j++)
            {
                if (n[i - 1] == array1[j])
                {
                    n[i] -=32;
                    break;
                }
            }
        }
    }
    return n;
}
