#include "variadic_functions.h"
#include <stdarg.h>

/**
 * a function that returns the sum of all its parameters.
 * @n: number of arguments
 * sum_them all returns d sum of all parameters
 * return sum;
 */

int sum_them_all(const unsigned int n, ...)
{
    unsigned int i;
    va_list list; /*define va_list variable*/
    int sum = 0;
    if (n == 0)/*checks if no argument is passed*/
        return 0;
    va_start(list, n); /*a macro which takes in 2 argument va_list name and number of arguments*/
    for (i = 0; i < n; i++)
    {
        sum = sum + va_arg(list, int);/*va_arg a macro takes in 2 argument va_list variable and data type*/
    }
    va_end(list);
    return sum;
}