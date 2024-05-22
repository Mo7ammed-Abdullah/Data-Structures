#include <iostream>
using namespace std;
                                                                                                        // in graph vertex are always in index order like    0 1 2 3 4 ,
                                                                                                        // u cant take value of vertex randomly if the size is 5 u must take numbers from  0 to 4
                                                                                                        //  this is a directed graph

struct Node                                                                                             // linked list type , datatype for array
{
    int vertex;
    Node *next;
};

void createGraph(Node *adjList[], int numVertices)                                                      // point all the pointers in array to null
{
    for (int i = 0; i < numVertices; i++)
    {
        adjList[i] = nullptr;
    }
}

void addEdge(Node *adjList[], int u, int v)
{                                                                       //                                                                       (for 0 and 1)                                   (for 0 and 2)
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->vertex = v;                                                // create a node with vertex 1                                                                                        2*
    newNode->next = adjList[u];                                         // point the node with vertex 1 towards the 0th pointer of array        1*                                            1
    adjList[u] = newNode;                                               // now the pointer of zero points to its first linked list       ==>  [   , * , * , * ]           ===+>             [   , * , * , * ]
}                                                                       //                                                                      0   1   2   3                                 0   1   2   3   

void displayGraph(Node *adjList[], int numVertices)
{
    for (int i = 0; i < numVertices; i++)
    {
        cout << i << " : --> ";
        Node *temp = adjList[i];
        while (temp != nullptr)
        {
            cout << temp->vertex << " --> ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main()
{
    int numVertices = 4;
    Node *adjList[numVertices];                                     // an array of pointers to the nodes of linked list [ * , * , * , * ]
                                                                    //                                                    0   1   2   3   
    createGraph(adjList, numVertices);

    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 2, 0);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 3, 3);

    displayGraph(adjList, numVertices);

    return 0;
}
