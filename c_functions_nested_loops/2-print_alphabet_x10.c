#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lower
 * Return : Always return 0
 */

void print_alphabet_x10(void)
{
    char alphabet = 'a';

    int i;
    for (i = 0; i <= 10; i++)
    {
        for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

            putchar(alphabet);

        putchar('\n');
    }
}