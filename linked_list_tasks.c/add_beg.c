#include <stdio.h>
#include <stdlib.h>

/**
 * a function that adds a new node to the beginning of
 * a singly linked list
 *
 */
struct node
{
    int data;
    struct node *link;
};

struct node *add_beg(struct node **head, int d);
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 98;
    ptr->link = NULL;
    head->link = ptr;

    add_beg(&head, 3);
    add_beg(&head, 4);
    add_beg(&head, 5);
    add_beg(&head, 6);
    add_beg(&head, 7);
    add_beg(&head, 8);
    add_beg(&head, 9);
    add_beg(&head, 10);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}

struct node *add_beg(struct node **head, int d)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;
    ptr->link = *head;
    *head = ptr;
}