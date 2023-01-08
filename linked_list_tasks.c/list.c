#include <stdio.h>
#include <stdlib.h>

/**
 * @inserting node at beginning of a list..
 *
 */

struct node
{
    int data;          // defining the data member//
    struct node *next; // defining a pointer to node type variable//
};
struct node *head; // global variable can be accessed anywhere//

void insert(int x);
void print();
int main()
{
    int n, i, x;
    head = NULL; // empty list
    printf("How many numbers: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the numbers: \n");
        scanf("%d", &x);
        insert(x);
        print();
    }
    return 0;
}

void insert(int x)
{
    /* creating a node and storing its address in a pointer node*/
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x; /*the node data part is initialized with the variable x which is supplied by user*/
    temp->next = NULL;
    if (head != NULL)
        temp->next = head; // head is initialised with address of the node,so now it points to the node
    head = temp;
}
void print()
{
    struct node *temp = head;
    printf("The list is: ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}