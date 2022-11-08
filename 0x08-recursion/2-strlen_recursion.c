#include "main.h"

/**
 * @
 * 
 */

    int _strlen_recursion(char *s)
{

    int count;
    if (*s == '\0')
    {
        return 0;
    }
    else 
    {
        count = 1 + _strlen_recursion(++s);
    }
    return count;
}    