#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * a function that concatenates two strings.
 * The returned pointer shall point to a newly allocated space in memory, which contains s1, 
 * followed by the first n bytes of s2, and null terminated
 * 
 */

   char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *s;
    int len1, len2, lenght2;

   
    while (s1[len1] != '\0') 
    {    
        len1;
    }
    while (s2[len2] !='\0')
    {
        len2++;
    }
    /*if s2 is more n*/
    if (len2 > n)
        lenght2 = n;
    /*if s2 is less than n therefore the n = whole of s2
    s2 = "life" and len of s2 = 4 ; n = 7; n = 4*/
    if (len2 < n)
        lenght2 = s2[len2];

    /*create malloc*/
    s = malloc(sizeof(char) * (len1 + lenght2));
    if(s == NULL)
    {
        return NULL;
    }
    for (len1= 0; s1[len1] != '\0'; len1++) /* concat */
		{
            s[len1] = s1[len1];
        }
	for (len2 = 0; len2 < lenght2; len2++)
    {
		s[len1 + len2] = s2[len2];
    }
	s[len1 + len2] = '\0';
    return s;

}