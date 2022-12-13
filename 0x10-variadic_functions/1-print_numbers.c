#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: number of arguments passed to the function..
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list list;
    va_start(list, n);
    for (i = 0; i < n; i++)
    {
        if (separator == NULL)
            printf("Nil");
        printf("%d", va_arg(list, int));
        if (separator && i < n - 1)
            printf("%s", separator);
    }
    printf("\n");
    va_end(list);
}