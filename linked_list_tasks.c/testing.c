#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef list_s
{
    char *str;
    unsigned int len;
    list_s *next;
} list_t;

int main()
{
    list_t *head = malloc(sizeof(list_t));
    head-> str = {"World", 5, NULL};
    head-> next = NULL;
    list_t *new = malloc(sizeof(list_t));
    new-> str = Hello;
    new->len = 5;
    new-> next = NULL;
    head-> next = new; 
    printf("%d", head->data);

}