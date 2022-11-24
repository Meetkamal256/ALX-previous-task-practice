#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *s;
    int len1, len2; 
    int numbyte;
    if (s1 == NULL)
        return ("");
    if (s2 == NULL)
        return ("");
    while (s1[len1] != '\0')
    {
        len1++;
    }
    while (s2[len2] != '\0')
    {
        len2++;
    }
    if (len2 > n)
    numbyte = n;
    if (len2 < n)
    {
        n = s2[len2];
    }
    s = (char *)malloc(sizeof(char) * len1 + numbyte);
    if (s == NULL)
    {
        return NULL;
    }
    len1 = 0;
    len2 = 0;
    while (s1[len1] != '\0')
    {
        s[len1] = s1[len1];
        len1++;
    }
    while (len2 < n)
    {
        s[len1 + len2] = s2[len2];
    }
    s[len1 + len2] = '\0';
    return (s);
}
