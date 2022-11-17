#include <stdio.h>

/**
 * a program that prints its name, followed by a new line.
 *
 */

int main(int argc __attribute__((unused)), char const *argv[])
{

    printf("%s\n", argv[0]); 
    printf("\n");
    return 0;
}