#include <stdio.h>
#include <stdlib.h>

/**
 * a function that returns the number of nodes in a linked list...
 *
 */
struct node
{
    int data;
    int link;
};

void count_of_nodes(struct node *head);
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 15;
    head->link = NULL;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 25;
    ptr->link = NULL;
    head->link = ptr;
    ptr = head;
    head = count_of_nodes(head);
    return 0;
}

void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("Linked list is empty");
    struct node *temp = NULL;
    ptr = head;
    while (temp != NULL)
    {
        count++;
        ptr = ptr->link;
    }
}
