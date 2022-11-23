#include "main.h"
#include <stdlib.h>

/**
 * a function that returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter
 *@str: char string to be copied
 *@strdup: duplicate a string using malloc
 * returns a pointer to the new duplicated string..
 */
 char *_strdup(char *str)
{
    char *a;
    int i = 0;
    int c;
   // get the length of string..
   // str --> strlen = 6
   // A L X  S E ---> data
   // 0 1 2 3 4 5 ---> index
   //
   // *copy
   //             /0 
   // 0 1 2 3 4 5 6
    while (str[i] != '\0')
    {
        i++;
    }
    //allocate enough memory space to contain the string str + null byte
    a = (char *)malloc (i * sizeof(char) + 1);
    // a loop counter that will loop thru each allocated space in memory and copy the string the new location //
    for (c = 0; str[c] != '\0'; c++)
    {
        a[c] = str[c];
    }
    a[c] = '\0';
    return a;
}