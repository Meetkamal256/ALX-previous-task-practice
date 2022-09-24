#include "main.h"
#include <stdio.h>
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);

	putchar(10);
}
/**
 * 
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}