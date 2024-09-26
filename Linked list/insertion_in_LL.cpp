#include<bits/stdc++.h>
using namespace std;
 
struct Node{			    	  // self referential structure
    int data;
    Node* next;				    // pointer to next node of structure data type
};

Node* head = 0;				    // head is null at the beginning
int SIZE = 0;				      // size keeps track of the linked list size


void addFirst(int item)			// to add item infront of the linked list
{
    			
    Node *nn = new Node;		// allocate memory for new node
    nn->data = item;			  // enter data in the node
 
    nn->next = head;			  // point next pointer towards head
 
    head = nn;				      // change head to be the new node
    SIZE++;				          // increase size
}

void addLast(int item)
{
    Node* nn = new Node;		// allocate memory for new node
    nn->data = item;			  // add data to the new node
    nn->next = 0;			      // point next pointer towards null
    SIZE++;
 
    Node* ptr = head;
    while(ptr->next != 0)
    {					              // traverse from head to last node 
        ptr = ptr->next;
    }
    ptr->next = nn;        // make the new node as last node
}
 
void Insert(int pos, int item)
{				                         	 // insert node at first position
    if(pos == 1) {
        addFirst(item);
    }

    else if(pos == SIZE + 1) {		// insert node at last position
        addLast(item);
    }

    else {				                // insert node in between

        Node* nn = new Node;			
        nn->data = item;			    // allocate memory and insert items


        Node* prev = head;
        for(int i = 1; i <= pos - 2; i++)	// prev traverse till the previous position of where we want to insert
            prev = prev->next;
 
        Node* cur = prev->next;			      // cur is the next node of prev
 
        prev->next = nn;			            // next node of prev becomes new node(nn)
        nn->next = cur;				            // next node of new node(nn) becomes current(cur) node
        SIZE++;
    }
}
void Print()
{
    Node* ptr = head;
    while(ptr){
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}
/// 13 5 100 10
int main()
{
    Insert(1, 5);
    Insert(2, 10);
    Insert(1, 13);
    Insert(3, 100);
    Print();
 
    return 0;
}
 
