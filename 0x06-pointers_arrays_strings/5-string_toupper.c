#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * a function that changes all lowercase letters of a string to uppercase.
 * @str: char string to be capitalized
 *
 * return void
 */

char *string_toupper(char *n)
{
    int i;
    char array1[] = ",;.!?\"\n \t(){}";
    
    for (i = 0; n[i] != '\0'; i++)
    {   
        // the if statement checks for a range a-z lowercase
        if (n[i] >= 97 && n[i] <= 122)
        {
            // a loop counter for array1 was started to check the separators
            for (int j = 0; array1[j] !='\0'; j++)
            {
                // a nested if statement condition to check if the previous characters are
                //among the separators and then capitalize the characters if the previous is among the separator// 
                if (n[i-1] == array1[j])
                {
                    n[i] -= 32;
                    break;
                }

            }
            
        }
    }
    return n;
}
