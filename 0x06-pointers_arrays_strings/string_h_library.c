#include <stdio.h>
#include <string.h>


int main() 
{
    //strings in c are character arrays where the last character in the string is a speacial character known as a null terminator '\0'//
    //how to use the strlen function (strlen(argument) //
    // int lenghth;
    // char str1[] = "MubarAk";
    // lenghth = strlen(str1);
    // printf("lenghth of string is: %d\n",lenghth);
    //  for (int i = 0; i < 7; i++)
    //  printf("str1[%d] = %c\n",i ,str1[i]);
    // int count_a = 0;
    // for (int j = 0; j < lenghth; j++)
    // if (str1[j] == 'a' || str1[j] == 'A')
    //     printf("a count = %d\n", count_a);
    //     count_a++;
// how to use the strcpy function (strcpy (argumenent1,argument2)// 
// is used to copy a string from a source character array to a destination character array//
        char src[12] = "123456785";
        char dest1[30];
        strcpy(dest1, src);
        printf("dest1:%s\n", dest1);
// how to use strncpy function - strncpy(dest, src, n);
//these function allows us to copy a certain amount of characters from the source to the destination and includes a third argument which allows us to specify the amount of characters to be copied //
    char dest2[12];
    strncpy(dest2, src, 10);
    printf("dest2: %s\n", dest2);
    char dest3[11];
strncpy(dest3, src, 6);
    dest3[11] = '\0';
    printf("dest3: %s", dest3);

return 0;   
}