#include "main.h"
#include <stdio.h>


/* more headers goes there */
/**
 * print_alphabet - Prints a to z
 *
 * Returns: Nil
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);

	putchar(10);
}

    