
#include <stdio.h> 
#define SIZE 5 
 
int stack[SIZE + 1], top = 0; 
 
int menu(void) 
{ 
    int choice; 
    do 
    { 
        printf("\n1-push\n2-pop\n0-Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
        if (choice < 0 || choice > 2) 
            printf("\nWrong...Choice again...\n"); 
    } while (choice < 0 || choice > 2); 
    return (choice); 
} 
 
void push() 
{ 
    int x; 
    printf("enter number: "); 
    scanf("%d", &x); 
    printf("\n"); 
    top++; 
    stack[top] = x; 
} 
void pop() 
{ 
    top--; 
} 
 
void display() 
{ 
    if (top <= 0) 
    { 
        printf("stack empty\n"); 
    } 
    printf("%d", stack[top]); 
} 
 
int main() 
{ 
    int choice; 
 
    do 
    { 
        choice = menu(); 
        switch (choice) 
        { 
        case 1: 
            push(); 
            display(); 
            break; 
        case 2: 
            pop(); 
            display(); 
            break; 
        case 0: 
            printf("End of operation\n"); 
            break; 
        } 
    } while (choice != 0); 
    return 0; 
} 
