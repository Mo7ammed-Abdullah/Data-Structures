// بسم الله الرحمن الرحيم
#include <stdio.h>
#include <stdlib.h>

struct linked_list                                           // self referential structure
{
    int num;
    struct linked_list *next;                                // a pointer pointing to same type structure ( next node)
};

typedef struct linked_list node;                             // here structure type is linked_list  so we shortly write node as the linked list elements are called node

void traverse(node *start)                                  // print items
{
    node *ptr;
    ptr = start;
    printf("\n elements in the linked list are \n");

    do
    {
        printf("%d\n", ptr->num);                            // keep going till start, (begore it was null)
        ptr = ptr->next;
    } while (ptr != start);
}

int main()
{
    int i, n, item;

    node *start, *ptr;                                       // create two  pointer variable,
                                                              // start keeps the address of 1st node and ptr keeps the address of current node
    start = (node *)malloc(sizeof(node));                     // memory allocation for first node
    ptr = start;                                              // now our current node is the first node
    printf("How many elements: ");
    scanf("%d", &n);                                          // for multiple elements in linked list

    for (i = 1; i <= n; i++)
    {
        printf("input a number: ");
        scanf("%d", &ptr->num);                              // enter value for num variable in the current node

        if (i != n)                                          // for the next node
        {
            ptr->next = (node *)malloc(sizeof(node));        // allocate memory for the next node in the pointer of the current node
                                                             //  our current node is complete
            ptr = ptr->next;                                 // now our current node (ptr) will be the allocated next node
        }
    }
    ptr->next = start;                                       // the last element will point towards start as it is a circular linked list

    traverse(start);

    return 0;
}
