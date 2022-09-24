#include <stdio.h>

int main(void)
{
//a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.//
    char alphabet;
    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    putchar(alphabet);
    for (alphabet = 'A'; alphabet<= 'Z'; alphabet++)
    putchar (alphabet);
    putchar('\n');
	return (0);
}
