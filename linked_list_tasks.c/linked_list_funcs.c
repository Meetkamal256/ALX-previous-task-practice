#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head;

int count_of_nodes(struct node *head);
void print_data(struct node *head);
void add_at_end(struct node *head, int data);
struct node *add_beg(struct node *head, int d);

int main()
{

    int count;
    count_of_nodes(head);
    print_data(head);
    add_at_end(head, 67);
    head = add_beg(head , data);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }
    struct node *head = (struct node *)malloc(sizeof(struct node)); // allocate memory for struct node
    head->data = 45;
    head->link = NULL;
    struct node *current = malloc(sizeof(struct node)); 
    current->data = 98;
    current->link = NULL;
    head->link = current;
    // struct node *current2 = malloc(sizeof(struct node));
    // current2 -> data = 4;
    // current2 -> link = NULL;
    // current -> link = current2;
    //  printf("%d %d %d", head ->data, current -> data, current2 -> data);
    current = malloc(sizeof(struct node));
    current->data = 4;
    current->link = NULL;
    head->link->link = current;

    return 0;
}
int count_of_nodes(struct node *head)
{
    int count =  0;
    if (head == NULL)
        printf("Linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    return count;
}
void print_data(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("linked list is empty");
    struct node *ptr = NULL; // create a new pointer to struct node and initialize to NULL//
    ptr = head;              // assign the address of the head pointer to ptr//
    while (ptr != NULL)
    {
        printf("%d", ptr->data)
            count++;
        ptr = ptr->link;
    }
}
void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}
struct node *add_beg(struct node *head, int d)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;
    ptr->link = head;
    head = ptr; 
    return head; 
}
