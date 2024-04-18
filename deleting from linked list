#include <stdio.h>
#include <stdlib.h>

struct linked_list                                                      // self referential structure
{
    int num;
    struct linked_list *next;                                           // a pointer pointing to same type structure ( next node)
};

typedef struct linked_list node;                                        // here structure type is linked_list  so we shortly write node as the linked list elements are called node

node *delete_beginning(node *start)
{
    node *ptr;
    ptr = start;
    start = start->next;
    free(ptr);                                                          // deletes the element from memory
    return start;
}

node *delete_from_between(node *start, int index)
{
    node *ptr_p;
    node *ptr_q;
    int i;

    ptr_p = start;                                                         // p will be at first position
    ptr_q = start->next;                                                    // q will be at second position right after p

    for (i = 1; i < index - 1; i++)
    {
        ptr_p = ptr_p->next;                                                // both p and q moves
        ptr_q = ptr_q->next;
    }
    ptr_p->next = ptr_q->next;                                              // when q reaches the index , point p->next towards q->next and delete q;

    free(ptr_q);
    return start;
}

node *delete_by_value(node *start, int item)
{
    node *ptr_p;
    node *ptr_q;

    ptr_p = start;
    ptr_q = start->next;

    if (start->num == item)                                                   // if the value is at first position
    {
        start = start->next;
        free(ptr_p);
        return start;
    }
                                                                                // if the value is not at first position
    while (ptr_q->num != item && ptr_q->next != NULL)                          // both p and q keeps on moving until item is found at q or q reaches the last element
    {
        ptr_p = ptr_p->next;
        ptr_q = ptr_q->next;
    }

    if (ptr_q->num == item)                                                     // if q finds the item
    {
        ptr_p->next = ptr_q->next;                                              //  when q reaches the item , point p->next towards q->next and delete q;
        free(ptr_q);                                                            // deletes the element from memory
    }
    return start;
}

void traverse(node *start)                                                      // print items
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
    int i, n, item = 1, index;

    node *start, *ptr;                                                        // create two  pointer variable,
                                                                              // start keeps the address of 1st node and ptr keeps the address of current node
    start = (node *)malloc(sizeof(node));                                     // memory allocation for first node
    ptr = start;                                                               // now our current node is the first node
    printf("How many elements: ");
    scanf("%d", &n);                                                           // for multiple elements in linked list

    for (i = 1; i <= n; i++)
    {
        printf("input a number: ");
        scanf("%d", &ptr->num);                                                 // enter value for num variable in the current node

        if (i != n)                                                             // for the next node
        {
            ptr->next = (node *)malloc(sizeof(node));                           // allocate memory for the next node in the pointer of the current node
                                                                                //  our current node is complete
            ptr = ptr->next;                                                    // now our current node (ptr) will be the allocated next node
        }
    }
    ptr->next = NULL;                                                           // null for the pointer of last node since there is no next node

    printf("Enter item to delete:");
    scanf("%d", &item);

    start = delete_by_value(start, item);                                       // function to delete by value

    traverse(start);                                                            // function to print items



//***********************************************************
    // if (index == 1)
    // {
    //     // start = delete_beginning(start);                                 // the commented ones are functions for if we want to delete by index
    // }
    // else
    // {
    //     // start = delete_from_between(start, index);
    // }

    return 0;
}
