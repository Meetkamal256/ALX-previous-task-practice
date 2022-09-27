#include "main.h"
/**
 * @ function that checks for a digit (0-9)
 * return 1 if it is a digit or 0 otherwise
 */

    int _isdigit(int c)
{
    return (c >= 48 && c <= 57);
}