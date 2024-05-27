// بسم الله الرحمن الرحيم
#include <stdio.h>
#include <stdlib.h>

struct linked_list                                  // self referential structure
{
    int num;
    struct linked_list *next;                       // a pointer pointing to same type structure ( next node)
};

typedef struct linked_list node;                    // here structure type is linked_list  so we shortly write node as the linked list elements are called node

void search(node *start)
{
    node *ptr = start;                              // node pointer set to start
    node *loc = NULL;                               // create a location node to store the location of item
    int item, cnt = 0;

    printf("\nInput item to search:");
    scanf("%d", &item);
    while (ptr != NULL)
    {
        cnt++;
        if (ptr->num == item)
        {
            loc = ptr;
            printf("item found at location %d\n", loc);
            printf("The item is at position %d of the linked list.\n ", cnt);
            return;
        }

        ptr = ptr->next;
    }

    printf("Item not found");
}
int main()
{
    int i, n, item;

    node *start, *ptr;                               // create two  pointer variable,
                                                     // start keeps the address of 1st node and ptr keeps the address of current node
    start = (node *)malloc(sizeof(node));            // memory allocation for first node
    ptr = start;                                    // now our current node is the first node
    printf("How many elements: ");
    scanf("%d", &n);                                 // for multiple elements in linked list

    for (i = 1; i <= n; i++)
    {
        printf("input a number: ");
        scanf("%d", &ptr->num);                     // enter value for num variable in the current node

        if (i != n)                                     // for the next node
        {
            ptr->next = (node *)malloc(sizeof(node)); // allocate memory for the next node in the pointer of the current node
                                                      //  our current node is complete
            ptr = ptr->next;                          // now our current node (ptr) will be the allocated next node
        }
    }
    ptr->next = NULL;                                // null for the pointer of last node since there is no next node

    search(start);                                   // function to search

    return 0;
}
