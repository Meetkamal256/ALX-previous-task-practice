#include <stdio.h>

/**
 * a program that prints no of argument passed into it
 * 
 */

    int main (int argc, __attribute__((unused)) char const *argv[])
{
    printf("%d\n",argc - 1);

    return 0;
}