#include <stdio.h>

/**
 * a program that prints all arguments it receives.
 *   only one argument per line , ending with new line and all args to be printed including first one
 * argc: number of argument
 * argv: array of argument
 * return 0 always...
 */

    int main(int argc, char const *argv[])
{
	int z;
    for (z = 0; z < argc; z++)
    {
        printf("%s\n", argv[z]);
    }
	return (0);
}
