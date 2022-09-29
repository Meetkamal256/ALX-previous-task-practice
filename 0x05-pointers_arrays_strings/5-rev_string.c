#include "main.h"

/**
 * @s string to be evaluated
 * a function that reverses a string..
 * 
 */

    void rev_string(char *s)
{
    int i , j, len;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    len = i;
    j = len -1;
    while (j >= 0)
    {
        _putchar(s[j]);
        j--;
    }
    _putchar('\n');
}