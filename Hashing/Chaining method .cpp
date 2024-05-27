// chaining method

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void insert(int key, Node *hashtable[], int size)
{
    int index = key % size;                                 // hash function to find index for the key
    Node *newNode = (Node *)malloc(sizeof(Node));           // create a node and put the key in its data variable
    newNode->data = key;                                    
    newNode->next = hashtable[index];                       // point its ( ->next) pointer towards the key index of hashtable 
    hashtable[index] = newNode;                             // move the array pointer from null to our current node.
}
void display(Node *hashtable[], int size)
{
    cout << "Elements in Hashtable are : \n";
    for (int i = 0; i < size; i++)
    {
        cout << i;
        Node *temp = hashtable[i];
        while (temp != NULL)
        {
            cout << " --> " << temp->data;
            temp = temp->next;
        }
        cout << endl;
    }
}
int main()
{
    int n, z;
    int size = 10;
    Node *hashtable[size];                                  // create a node type pointer array
    for (int i = 0; i < size; i++)                          
    {
        hashtable[i] = NULL;                                // make the array pointer pointing towards null
    }
    cout << "Enter number of keys: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> z;
        insert(z, hashtable, size);                         // insert keys
    }
    display(hashtable, size);
    return 0;
}
