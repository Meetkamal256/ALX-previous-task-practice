#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_char(char *string)  // "438200"
{
    for (size_t i = 0; i < strlen(string); i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
            continue;
        return (1);
    }
    return (0);
}

int main(int argc, char *argv[])
{
    int i, result;

    for (i = 1, result = 0; i < argc; i++)
    {
        // 2423 or 30430 8 9 char*
        if (test_char(argv[i]))
        {
            puts("Error");
            return (1);
        }
        result += atoi(argv[i]);
    }

    printf("%d\n", result);
    return 0;
}