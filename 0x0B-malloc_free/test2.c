#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2);
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

    char *str_concat(char *s1, char *s2)
{
    char *s;
    int k;
    if (s1 == NULL)
    return("");
    if (s2 == NULL)
    return("");
    int i = 0;
// get length of string for s1 and s2
    while (s1[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while (s2[j] != '\0')
    {
        j++;
    }
   // allocate enough space for both s1 and s2 using malloc
//   s = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
     s = malloc(sizeof(char) * (j +i + 1));
    //copy s1 and s2 into the allocated space in memory
    for (int k = 0; s1[k] != '\0'; k++)
    {
        s[k] = s1[k];
    }
    for (k = 0; k < i + j; k++)
    {
        s[i +k] = s2[k];
    }
    s[k] = '\0';
    return (s);
}