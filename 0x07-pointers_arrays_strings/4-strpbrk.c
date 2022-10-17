#include "main.h"

/**
 * @brief 
 * 
 */

    char *_strpbrk(char *s, char *accept)
{
    int i , j;
    int c = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (int j = 0; accept[j] != '\0'; j++)
        if (s[i] == accept[j])
        {
            return &s[i];
            break;
        }
        if (accept[j] == '\0')
        {
            break;
        }

    }
    return 0;
}
