#include <stdio.h>

int main() {
    //a program that prints the alphabet in lowercase except 'q' and 'e', followed by a new line
    char alphabet;
    for(alphabet = 'a'; alphabet<= 'z'; alphabet++)
    {
        if(alphabet != 'e' && alphabet !='q')
        putchar(alphabet);
    }
    putchar('\n');
    

    return 0;
}
