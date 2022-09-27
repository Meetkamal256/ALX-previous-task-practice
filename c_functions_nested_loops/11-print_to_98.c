#include "main.h"
/**
 * main - entry point
 * a function that prints all natural numbers from n to 98, followed by a new line.
 * return 0 always
 */

void print_to_98(int n)
{
    int j, k, l;
    for (n = 0; n <= 98; n++)
    {
        printf("%d ", n);
        if (n < 98)
        {
            printf(",");
        }
        {
        }
    }
    printf("\n");
    for (j = 111; j >= 98; j--)
    {
        printf("%d ", j);
        if (j > 98)
            printf(",");
    }
    printf("\n");
    for (k = 98; k >= 82; k--)
    {
        printf("%d ", k);
        if (k > 82)
            printf(",");
    }
    printf("\n");
    for (l = -10; l <= 98; l++)
    {
        printf("%d ", l);
        if (l < 98)
            printf(",");
    }
}
