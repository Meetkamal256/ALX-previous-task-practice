#include "main.h"

/**
 * a function that prints a string followed by a new line..
 * @s: char string..
 */

    void _puts_recursion(char *s)
{
    // your base case//
    // check if you are at the end of the string by comparing string with terminating null byte then
    //print a new line//
    if (*s == '\0') 
    {
        _putchar('\n');
    }
    else
    {
        _putchar(*s); // prints out the first character of the string//
        _puts_recursion(++s); // recursively print the rest of the characters of the string..
    }
}