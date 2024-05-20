#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max_edges, n, i, j, origin, destin, graph_type;
    cout << "enter number of nodes/vertices: ";
    cin >> n;                                                                               // enter number of vertices , eg: 3
    int adj[n + 1][n + 1] = {0};                                                            // take 2D array to the size of 3*3


    cout << "choose: (1) undirected graph / (2) directed graph:";
    cin >> graph_type;
    if (graph_type == 1)                                                                    // if the graph is undirected , maximum edges possible is , 3*(3-1)/2 = 3
    {
        max_edges = n * (n - 1) / 2;
    }
    else                                                                                    // if the graph is directed , maximum edges possible is , 3*(3-1) = 6
    {
        max_edges = n * (n - 1);
    }

    for (i = 1; i <= max_edges; i++)
    {
        cout << "Enter origin and destination (0 0 to quit):";                              // choose two vertex between which there will be an edge.
        cin >> origin >> destin;

        if (origin == 0 && destin == 0)                                                     // if we dont want to make any new edges
        {
            break;
        }
        if (origin > n || destin > n || origin <= 0 || destin <= 0)                         // so that the vertices does not go out of bound, if no of vertex is 3 inputs must be from 1 2 3
        {
            cout << "Invalid Input" << endl;
            i--;
        }

        else
        {
            adj[origin][destin] = 1;                                                        // mark 1 for an edge between the origin and destination vertex

            if (graph_type == 1)
            {
                adj[destin][origin] = 1;                                                    // mark 1 again between destination and origin if its an undirected graph
            }
        }
    }

    cout << "The adjacency matrix is:" << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
