#include <stdio.h>
#include <stdlib.h>

/**
 * a program that deletes the last node in a singly linked list
 *
 */

struct node
{
    int data;
    struct node *link;
};
struct node *del_last(struct node *head);
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 125;
    head->link = NULL;
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 225;
    ptr->link = NULL;
    head->link = ptr;
    ptr = malloc(sizeof(struct node));
    ptr->data = 325;
    ptr->link = NULL;
    head->link->link = ptr;
    head = del_last(head);
    
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}
struct node *del_last(struct node *head)
{
    if(head == NULL)/*check if list is empty*/
    printf("The list is empty");

    else if (head->link == NULL)/*check if list contains one node*/
    {
        free(head);/*delete the node*/
        head = NULL;/*intitialize address of head to NULL*/
    }
    else
    {
        struct node *temp = head;
        struct node *temp2 = head;
        while(temp->link != NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }   
        temp2-> link = NULL;
        free(temp);
        temp = NULL;
        return head;
    }
}
