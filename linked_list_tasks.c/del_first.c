#include <stdio.h>
#include <stdlib.h>

/**
 * a function that deletes the first node in a singly linked list.
 *
 */

struct node
{
    int data;
    struct node *link;
};
struct node *del_first(struct node *head);
 
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 98;
    ptr->link = NULL;
    head->link = ptr;
    ptr = malloc(sizeof(struct node));
    ptr->data = 3;
    ptr->link = NULL;
    head->link->link = ptr;
    head = del_first(head);
    ptr  = head; 
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}
struct node *del_first(struct node *head)
{
    if (head == NULL) /*check if linked list is empty*/
        printf("List is already empty");
    /*check if list contains a single node, then free that node and assign NULL to head*/
    else if(head->link == NULL)
    {
        printf("Linked list is empty\n");
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
    return head;
}
