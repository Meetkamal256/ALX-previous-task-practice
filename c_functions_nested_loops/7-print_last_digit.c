#include "main.h"

/* more headers goes there */
/**
 * print_last_digit - Entry point
 * @d: the integer to check
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int print_last_digit(int d)
{

	if (d < 0)
		d = -d;

	int a = d % 10;
	_putchar(a + '0');

	return (a);
}