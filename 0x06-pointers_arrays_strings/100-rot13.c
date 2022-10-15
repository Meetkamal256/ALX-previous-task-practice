#include "main.h"

/**
 * a function that encodes a string using rot13.
 * @x: char string
 *
 */

char *rot13(char *s)
{
    int i, x;

    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; s[i] != '\0'; i++)
    {
        for (x= 0; a[x] != '\0'; x++)
        {
            if (s[i] == a[x])
            {
                s[i] = b[x];
                break;
            }
        }
    }    
        return (s);
}        
