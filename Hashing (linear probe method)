// linear probe hashing method

#include <bits/stdc++.h>
using namespace std;

#define TABLE_SIZE 10

void insert(int key, int table[])
{
    int index = key % TABLE_SIZE;                           // find index for the key using the function
    while (table[index] != -1)                              // if the index is filled ,run a loop until we find an empty index
    {
        index = (index + 1) % TABLE_SIZE;                   // go to the next index
    }
    
    
        table[index] = key;                                 // empty index found , so insert the key there
    
}

bool search(int key, int table[])
{
    int index = key % TABLE_SIZE;                           // go to index of the key using this function
    while (table[index] != -1)                              // if the index is filled keep searching untill we find an empty index
    {
        if (table[index] == key)
        {
            return true;                                
        }
        index = (index + 1) % TABLE_SIZE;
    }
    return false;                                           // if empty index is found but key is not found. then key is not present in table
}

int main()
{
    int x, num_keys, srch, a;
    int table[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++)                    //  initialize hash table as empty
    {
        table[i] = -1;
    }

    cout << "Enter number of keys to insert: ";         
    cin >> num_keys;
    cout << "Insert the keys: ";
    for (int i = 0; i < num_keys; i++)
    {
        cin >> x;                                           // insert values
        insert(x, table);
    }
    cout << "Enter a key to search: ";
    cin >> srch;
    a = search(srch, table);
    if (a == true)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}
