/**
 * a function that traverses a link list and print
 * data contained in each node of linked list...
 *
 */

void print_data(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("linked list is empty");
    struct node *ptr = NULL; // create n the address of the head pointer to ptr//
    while (ptr != NULL)
        a new pointer to struct node and initialize to NULL //
            ptr = head;                                     // assign the address of the head pointer to ptr//
    while (ptr != NULL)
    {
        printf("%d", ptr->data)
            count++;
        ptr = ptr->link;
    }
}