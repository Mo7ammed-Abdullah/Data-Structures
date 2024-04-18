#include <stdio.h>
#include <stdlib.h>

struct linked_list                                                      // self referential structure
{
    int num;
    struct linked_list *next;                                           // a pointer pointing to same type structure ( next node)
};

typedef struct linked_list node;                                      // here structure type is linked_list  so we shortly write node as the linked list elements are called node

node *insert_beginning(node *start, int item)                           // insert item at first position before the current start
{
    node *new_node = (node *)malloc(sizeof(node));                      // create new node to insert

    new_node->num = item;

    new_node->next = start;                                             // point towards the address of (start node) as this node will be the new (start node)

    return new_node;
}

node *insert_in_between(node *start, int item, int index)               // insert items at any index except first index as first index is start
{

    node *ptr = start;                                                  // create a pointer node
    node *new_node = (node *)malloc(sizeof(node));
    int i ;
    for (i=1 ; i < index - 1 ; i++)                                      // move pointer till the before postion of the index
    {
        ptr = ptr->next;                                                // move pointer to next node [pointer ++]
        
    }
    new_node->num = item;
    new_node->next = ptr->next;                                         // Set the next pointer of the new node to the next node of the current node
    ptr->next = new_node;                                               // Set the next pointer of the current node to point to the new node

    return start;                                                       // insertion complete so return the start position
}

void traverse(node *start)                                              // print items
{
    node *ptr;
    ptr = start;
    printf("\n elements in the linked list are \n");
    while (ptr != NULL)
    {
        printf("%d\n", ptr->num);
        ptr = ptr->next;
    }
}

int main()
{
    int i, n, item, index;

    node *start, *ptr;                                                  // create two  pointer variable,
                                                                        // start keeps the address of 1st node and ptr keeps the address of current node
    start = (node *)malloc(sizeof(node));                               // memory allocation for first node
    ptr = start;                                                        // now our current node is the first node
    printf("How many elements: ");
    scanf("%d", &n);                                                    // for multiple elements in linked list

    for (i = 1; i <= n; i++)
    {
        printf("input a number: ");
        scanf("%d", &ptr->num);                                          // enter value for num variable in the current node

        if (i != n)                                                      // for the next node
        {
            ptr->next = (node *)malloc(sizeof(node));                    // allocate memory for the next node in the pointer of the current node
                                                                         //  our current node is complete
            ptr = ptr->next;                                             // now our current node (ptr) will be the allocated next node
        }
    }
    ptr->next = NULL;                                                   // null for the pointer of last node since there is no next node

    printf("Insert new item at position:");
    scanf("%d", &index);
    printf("Enter item:");
    scanf("%d", &item);

    if (index == 1)
    {
        start = insert_beginning(start, item);                          // function to insert at first position
    }
    else
    {
        start = insert_in_between(start, item, index);                  // function to insert at any index except beginning
    }

    traverse(start);                                                    // function to print items

    return 0;
}
