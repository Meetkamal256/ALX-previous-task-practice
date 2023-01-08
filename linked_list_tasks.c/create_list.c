 #include <stdio.h>
#include <stdlib.h>

/**
 *
 * a function that creates a linked list by calling another function
 * which adds a new node to the end of the previous node.
 *
 *
 */
struct node
{
    int data;
    struct node *link;
};
struct node *add_at_end(struct node *ptr, int data);

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    struct node *ptr = head;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 67);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}
struct node *add_at_end(struct node *ptr, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    ptr->link = temp;
    return temp;
} 