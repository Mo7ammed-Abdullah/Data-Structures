#include <bits/stdc++.h>
using namespace std;

struct node                                                 ///node structure
{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node node;

node *createnode(int value)                                 /// create node (doubly linked list node)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

node *insert(node *root , int value)
{                                                       //   input is 5 3 6 2 4                         
                                                           
                                                        //             (prev_root) =NULL
                                                        //          5  (curr_root)
                                                        //         / \
                                                        //        3   6
                                                        //       / \   \
                                                        //      2   4   NULL
                                                        //     /     \
                                                        //    NULL   NULL

    if (root == NULL)                                       // for first input , if root is empty create root
    {
        root = createnode(value);
    }
    else
    {
        node *curr_root = root;                             
        node *prev_root = NULL;
        while (curr_root != NULL)                           // now our current root pointr will keep going till it reach null
        {
            prev_root = curr_root;                          // previous root pointr will follow the current root

            if (value < curr_root->data)                    // if the value sent is smaller then current root data . current root pointr go left
            {
                curr_root = curr_root->left;
            }
            else if (value > curr_root->data)               // if the value sent is greater then current root data. current root pointr go right
            {
                curr_root = curr_root->right;
            }
        }
        node *newnode = createnode(value);                  // once current root pointer reach null , we go to previous root pointer to decide the left or right node for our value 
        if (value < prev_root->data)                        // then we create a new node and assign it to left or right of prev root
        {
            prev_root->left = newnode;
        }
        else
        {
            prev_root->right = newnode;
        }
    }
    return root;


                                         //                  5                                  5
                                         //                 / \                                / \
                                         //                3   6                              3   6
                                         //               / \   \         --->               / \   \
                                         // (prev_root)  2   4   N             (prev_root)  2   4   N
                                         //             /     \                            /     \ 
                                         //(curr_root) N       N                          1       N


}


void preorder(node *root)                              // Function to perform preorder traversal of the BST
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}


void inorder(node *root)                              // Function to perform inorder traversal of the BST
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}


void postorder(node *root)                            // Function to perform postorder traversal of the BST
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    int n, value;
    node *root = NULL;                                          // initially root is NULL

    printf("Enter the number of elements: ");
    cin >> n;

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        root = insert(root, value);
    }

    cout << "Preorder:" << endl;
    preorder(root);
    cout << endl;
    cout << "Inorder:" << endl;
    inorder(root);
    cout << endl;
    cout << "Postorder:" << endl;
    postorder(root);

    return 0;
}
