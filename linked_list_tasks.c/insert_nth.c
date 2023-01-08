#include <stdio.h>
#include <stdlib.h>

/**
 * insert a node at nth position of the list..
 *
 */

struct node
{
    int data;          /*defining the data member*/
    struct node *next; /*defining the pointer to the node type variable */
};
struct node *head;
void insert(int data, int n);
void print();
int main()
{
    head = NULL;  /*empty list*/
    insert(2, 1); // list: 2
    insert(3, 2); // list: 2, 3
    insert(4, 1); // list: 4, 2, 3
    insert(5, 2); // list: 4, 5, 2, 3
    print();
    return (0);
}
void insert(int data, int n)
{
    struct node *temp1 = (struct node *)malloc(sizeof(struct node));
    temp1->data = data;
    temp1->next = NULL;
    if (n == 1)
        temp1->next = head;
    head = temp1;
    return;
}
struct node *temp2 = head;
for (i = 0; i< n-2; i++)
{
    temp2 = temp2->next;
}
temp1 -> next = temp2-> next;
temp2-> next = temp1;
void print()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
