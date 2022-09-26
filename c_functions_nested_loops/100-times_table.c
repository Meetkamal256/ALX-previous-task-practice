#include <stdio.h>

int main() 
{
    int r, c;
    for (r =0; r <= 12; r++)
    {
        for (c = 0; c <=12; c++)
    {
        if (r <= 12 && c <= 12)
        {
           
            printf(" ");
            printf(",");
            printf("...");
        }
         printf ("%2d", r*c);
    }
    printf("\n");
    }  
    return 0;
}