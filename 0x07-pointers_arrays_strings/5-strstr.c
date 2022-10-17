#include "main.h"

/**
 * @brief 
 * 
 */

    char *_strstr(char *haystack, char *needle)
{
    int i;
    int c = 0;
    int j;
    int flag;
    for (i = 0; haystack[i] != '\0'; i++)
    {
            if (haystack[i] == needle[j])
            {
             for (j = 0; needle[j] != '\0'; j++)
             {
                flag = 0;
                if (haystack[i] != '\0')
                {
                    flag = 1;
                }
                else (flag == 0) break;
             }
                return &haystack[i];
                break;
            }
    } 
    return 0;
}           
    
    
