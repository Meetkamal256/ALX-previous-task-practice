#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int count;
    va_list list;
    va_start(list, n);
    for (count = 0; count < n; count++)
    {
        char *string = va_arg(list, char *);
        if (string == NULL)
            printf("Nil");
        else
            printf("%s", string);
        if (separator != NULL && count < n - 1)
            printf("%s", separator);
    }
    printf("\n");
    va_end(list);
}
