#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node node;

node *createnode(int value)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

node *insert(node *root, int value)
{
    if (root == NULL)
    {
        root = createnode(value);
    }
    else
    {
        node *curr_root = root;
        node *prev_root = NULL;
        while (curr_root != NULL)
        {
            prev_root = curr_root;

            if (value < curr_root->data)
            {
                curr_root = curr_root->left;
            }
            else if (value > curr_root->data)
            {
                curr_root = curr_root->right;
            }
        }
        node *newnode = createnode(value);
        if (value < prev_root->data)
        {
            prev_root->left = newnode;
        }
        else
        {
            prev_root->right = newnode;
        }
    }
    return root;
}
void inorder(struct node *root)
{

    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

node *inOrderPredecessor(node *root)                            // inorderpredecessor is always found at the right most node of the left subtree
{
    root = root->left;                                          // so first go left
    while (root->right != NULL)
    {
        root = root->right;                                     // then keep going right
    }
    return root;
}

node *deleteNode(node *root, int value)
{

    if (root == NULL)                                           // step 2: base case, if we reach the end of the tree and node is not found
    {
        return NULL;
    }

    else if (value < root->data)                                // step 1: search for the node , if small then root go left else go right 
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }

    else                                                        // step 3: we found the node
    {

        // case 1:                                              // if the node(to be deltd) has NO children
        if (root->left == NULL && root->right == NULL)
        {
            delete root;                                        // delete the node
            return NULL;                                        // make the node NULL
        }

        //case 2:                                               // if the node(to be deltd) has only 1 child 
        else if (root->left == NULL)                            // if the child is right child
        {
            node *temp = root;                                  
            root = root->right;                                 // replace the node(to be deltd) with right child
            delete temp;                                        // delt the right child
        }
        else if (root->right == NULL)                           // if the child is left child
        {
            node *temp = root;
            root = root->left;                                  // replace the node(to be deltd) with left child
            delete temp;                                        // delt the left child
        }

        //case 3:                                               // if the node to(to be deltd) has 2 children
        else
        {
            node *ipre = inOrderPredecessor(root);              // search for its inorderpredecessor
            root->data = ipre->data;                            // replace the node(to be deltd) with its inorder predecessor
            root->left = deleteNode(root->left, ipre->data);    // search and delete the inorder predecessor node (recursively). we sent root as root->left cos inorderpre is always found at left subtree
        }
    }
    return root;
}
int main()
{
    int n, value, key;
    node *root = NULL;                                          // initially root is empty
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        root = insert(root, value);
    }
    cout << "Enter key to delete: ";
    cin >> key;

    cout << "Inorder traversal before deletion" << endl;
    inorder(root);
    cout << endl;

    root = deleteNode(root, key);

    cout << "Inorder traversal after deletion" << endl;
    inorder(root);

    return 0;
}
