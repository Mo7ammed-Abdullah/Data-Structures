// بسم الله الرحمن الرحيم
#include <stdio.h>
#include <stdlib.h>

struct linked_list                                                                 // self referential structure
{
    int num;
    struct linked_list *prev;                                                     // a pointer pointing to same type structure ( next node)
    struct linked_list *next;                                                     // a pointer pointing to same type structure ( previous node)
};

typedef struct linked_list node;                                                 // here structure type is linked_list  so we shortly write node as the linked list elements are called node

void traverse_front(node *start)                                                 // print forward
{
    node *ptr;
    ptr = start;
    printf("\n elements in the linked list forward are \n");

    while (ptr != NULL)
    {
        printf("%d\n", ptr->num);
        ptr = ptr->next;                                                        // keep going to next node
    }
}

void traverse_back(node *end)                                                   // print backward
{
    node *ptr;
    ptr = end;
    printf("\n elements in the linked list backward are \n");

    while (ptr != NULL)
    {
        printf("%d\n", ptr->num);
        ptr = ptr->prev;                                                       // keep going to previous node
    }
}

int main()
{
    int i, n, item;
                                                                             // create  pointer variable,
    node *start, *ptr_p, *ptr_q, *end;                                       // start keeps the address of 1st node and ptr_p will be at first position while ptr_q will be at the next position and end will store the address of last node

    start = (node *)malloc(sizeof(node));                                   // memory allocation for first node

    printf("How many elements: ");
    scanf("%d", &n);                                                         // for multiple elements in linked list

    ptr_q = start;                                                           // now our current node is the first node
    ptr_q->prev = NULL;                                                     // first node's prev pointer will be NULL as there is no node before it

    for (i = 1; i <= n; i++)
    {
        printf("input a number: ");
        scanf("%d", &ptr_q->num);

        if (i != n)
        {
            ptr_q->next = (node *)malloc(sizeof(node));                     // allocate memory for the next node in the pointer of the current node
                                                                            //  our current node is complete

            ptr_p = ptr_q;                                                   // ptr_p and ptr_q are at same node( 1st node)
            ptr_q = ptr_q->next;                                            // now ptr_p will remain and ptr_q will be at the next node (2nd node)
            ptr_q->prev = ptr_p;                                            // and the prev pointer of ptr_q will be at ptr_p (1st node)
        }
    }
    ptr_q->next = NULL;                                                      // next pointer of last node is null
    end = ptr_q;                                                             // we save the address of last node for printing backwards

    traverse_front(start);
    traverse_back(end);

    return 0;
}
