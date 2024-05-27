#include <bits/stdc++.h>
using namespace std;
#define size 50

int adj[size][size];
int n;

// creating an adjacent matrix undirected graph
void create_graph()
{
    int max_edges, i, j, origin, destin;

    cout << "enter number of vertices: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            adj[i][j] = 0;
        }
    }

    max_edges = n * (n - 1) / 2;

    for (i = 0; i < max_edges; i++)
    {
        cout << "Enter edges (enter 0 0 to end):";
        cin >> origin >> destin;

        if (origin == 0 && destin == 0)
        {
            break;
        }

        adj[origin][destin] = 1;
        adj[destin][origin] = 1;                            // comment this if you want a directed graph
    }

    cout << "The adjacency matrix is:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << adj[i][j] << " ";        
        }
        cout << endl;
    }
}

// DFS traversal
void DFS(int i, int visited[])
{
    if (visited[i] == 1)                            // base case , make unvisited neighbours as visited and return
    {
        return;
    }

    cout << i << " ";
    visited[i] = 1;                                 // first visited vertex eg: 0
    for (int j = 0; j < n; j++)                     // iterate through all neighbors of the vertex
    {
        if (adj[i][j] == 1 && visited[j] == 0)
        {
            DFS(j, visited);                        // recursively call , eg: in 0th row if 1 is found at 2nd column . the function goes to 2nd row this way it visits all the first edges of every row, then visits remaining edges.
        }
    }
}
int main()
{
    int i;
    create_graph();
    int visited[n] = {0};
    cout << "Choose first node to begin traversal: ";
    cin >> i;
    DFS(i, visited);

    return 0;
}
