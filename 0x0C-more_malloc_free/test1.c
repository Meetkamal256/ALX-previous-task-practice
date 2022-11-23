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
    char *ptr;
    int len1, len2, numbyte;
    if (s1 == NULL) /*account for NULL strings*/
        return ("");
    if (s2 == NULL) /*account for NULL strings*/
        return ("");
    while (s1[len1] != '\0') /*get length 0f s1*/
    {
        len1++;
    }
    while (s2[len2] != '\0')
    {
        len2++;
    }
    if (len2 > n) /*if s2 is more than n*/
        numbyte = n;
    if (len2 < n) /*if s2 is less than n, n will be equal to the length of s2 so as not to leave any unused memory space*/
        numbyte = s2[len2];

    /*allocate space for s1 and the number of bytes to be copied from s2*/
    ptr = malloc(sizeof(char) * (len1 + numbyte));
    if (ptr == NULL) /*check for error in case malloc fails*/
        return NULL;
    for (len1 = 0; s1[len1] != '\0'; len1++) /*copy s1 to allotted space*/
    {
        ptr[len1] = s1[len1];
    }
    for (len2 = 0; len2 < numbyte; len2++)
    {
        ptr[len1 + len2] = s2[len2];
    }
    ptr[len1 + len2] = '\0';
    return (ptr);
}