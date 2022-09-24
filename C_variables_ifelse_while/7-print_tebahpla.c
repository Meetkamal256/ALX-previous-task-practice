#include <stdio.h>

/** A program that prints alphabet a-z in reverse and a new line
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{

                char alphabet;  

                for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
                putchar(alphabet);
                putchar('\n');
        return (0);
}
