#include "main.h"

/**
 * @str string to be evaluated
 * a function that prints every other character of a string, starting with the first character, 
 * followed by a new line.
 */
    
    void puts2(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] % 2 == 0)
        {
        _putchar(str[i]);
        }
    }
    _putchar('\n');
}