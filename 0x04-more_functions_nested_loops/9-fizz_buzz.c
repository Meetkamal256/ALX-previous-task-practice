#include <stdio.h>

/**
 * @ program that prints the numbers from 1 to 100, followed by a new line.
 * for multiple of 3 prints FIZZ, multiple of 5 BUZZ and numbers which are both multiple of 3 and 5 prints
 * FIZZBUZZ
 * return 0 always
 */
int main(void)
{
    int n;
    for (n = 1; n <= 100; n++)
    {

        if (n % 3 == 0)
        printf("FIZZ");
        else if (n % 3 == 0 && n % 5 == 0)
        printf("FIZZBUZZ");
        else if (n % 5 == 0)
        printf("BUZZ");
        else
        printf("%d ", n);
        
        if (n != 100)
        printf (" ");
        
    }
    printf("\n");
    return (0);
}   