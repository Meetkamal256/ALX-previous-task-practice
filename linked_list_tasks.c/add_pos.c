#include <stdlib.h>
#include <stdio.h>

/**
 * a function that adds a new node at a certain position in a
 * singly linked list
 *
 */

struct node
{
    int data;
    struct node *link;
};

void add_at_pos(struct node *head, int data, int pos);
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

    add_at_pos(head, 67, 3);
    add_at_pos(head, 14, 2);
    add_at_pos(head, 15, 3);
    add_at_pos(head, 16, 4);
    add_at_pos(head, 25, 6);
    add_at_pos(head, 67, 2);
    add_at_pos(head, 67, 2);
    add_at_pos(head, 13, 11);
    add_at_pos(head, 999, 12);

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}
void add_at_pos(struct node *head, int data, int pos)
{
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;

    pos--;
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}
