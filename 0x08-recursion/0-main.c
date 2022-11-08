#include <stdio.h>
#include <string.h>


void reverse_words(char *s)
{
    int len = strlen(s); // a fuction in sing.h library to calculate length of sing//
    int i = 0, j = 0;
    char temp[200]; // a temp char array to store words before reversing //
    // outer loop keeps track of whether you reach the end of the string or not//
    for (i = 0; i < len; i++)
    {
        // the first inner loop is going to identify the word//
        // j is used to count length of word and i is used to step thru the string one character at a time //
        for (j = 0; i < len; j++, i++)
        {
            // a nested if statement to check for end of the word then break;
            if (s[i] == ' ' || s[i] == '.')
            {
                break;
                temp[j] = s[i]; // we store the character we are currently looking at in a temp variable//
            }
            while (j > 0)
            {
                j--;
                s[i - j - 1] = temp[j];
            }
        }
    }
}



/**
 *
 * a function that reverses the words in a string
 *
 */

void reverse_words(char *s);
int main()
{
    char s[] = "this is the way.";
    printf("%s\n", s);
    reverse_words(s);
    printf("%s\n", s);

    return 0;
}