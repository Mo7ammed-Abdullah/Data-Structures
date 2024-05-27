#include <bits/stdc++.h>
using namespace std;


vector<int> adjList[10];                            // Array of vectors . each array index have a vector . array index represent vertex and vector of that index represent list of connected neighbours(edges)

void addEdge(int u, int v)                          // Function to create an undirected edge between two vertex
{
    
                                                    //  exampe:
    adjList[u].push_back(v);                        //  edge between vertex 1 and 2
    adjList[v].push_back(u);                        //  edge between vertex 2 and 1
}

void displayAdjList(int V)                          // Function to display the adjacency list of the graph
{
    for (int i = 0; i < V; ++i)
    {
        cout << "Vertex " << i << ":";
        for (int j = 0; j < adjList[i].size(); ++j)  // display edges of all the 5 vertices
        {
            cout << " -> " << adjList[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int V = 5;                                      // Number of vertices  0 , 1 , 2 , 3 , 4 

    addEdge(0, 1);                                  // create connection/edge between two vertices
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);

                                                    // Display the adjacency list of the graph
    displayAdjList(V);

    return 0;
}
  
