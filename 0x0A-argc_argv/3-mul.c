#include <stdio.h>
#include <stdlib.h>

/**
 *  a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv:array of arguments
 * return 0 always
 */

int main(int argc, char const *argv[])
{
    int x, y;
    if (argc == 3)
    {
        x = atoi (argv[1]);
        y = atoi (argv[2]);
        printf("%d\n", x * y);
        return 0;
    }
    printf("Error\n");
    return 1;
}