#include <stdio.h>
#include <stdlib.h>

/**
 * a program that deletes a node at nth position
 *
 */

struct node
{
    int data;
    struct node *link;
};
void del_pos(struct node **head, int position);
int main()
{
   struct node *head = malloc(sizeof(struct node));
    head->data = 765;
    head->link = NULL;
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 1256;
    ptr->link = NULL;
    head->link = ptr;
    ptr = malloc(sizeof(struct node));
    ptr->data = 9087;
    ptr->link = NULL;
    head->link->link = ptr;
    del_pos(&head, 3);

    ptr = head;
    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr-> link; 
    }
    return 0;
}
void del_pos(struct node **head, int position)
{
    struct node *previous = *head;
    struct node *current = *head;
    if(*head == NULL)
    printf("The list is already empty");
   
    else if (position == 1)
    {
    /*assign the address of the head pointer of the main function
    to the second node */
        *head = current->link; 
        free(current);/*free the current pointer pointing at the 1st node*/
        current = NULL;/*initialize  the current pointer address to NULL after deletion*/
    }
    else
    {
        while(position != 1)
        {
            previous = current;
            current = current->link;
            position--;

        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}
