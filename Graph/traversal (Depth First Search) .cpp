#include<bits/stdc++.h>
using namespace std;
 
void DFS(int node ,  vector<vector<int>> &adj_list , vector<int> &visited )
{
    visited[node] = 1;                                            // initial node is visited
    cout<<node<<" ";

    for(auto neighbour : adj_list[node])                          // check the neighbours of that node 
    {
        if(!visited[neighbour])                                   // if the node is not visited
        {
            DFS(neighbour , adj_list , visited);                  // recursively check if the neighbours of that node is visited
        }
    }
}

void dfsOFgraph(int n ,  vector<vector<int>> &adj_list )
{
    vector<int> visited(n+1 , 0);                               // vector keeps track of visited nodes

    int start_node;
    cin >> start_node;

    cout<<"DFS TRAVERSAL: ";
    DFS(start_node , adj_list , visited);                       // dfs traversal sends ( start node , adjacency list , visited vector) 
    cout<<endl;


}

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;

    vector<vector<int>> adj_list(nodes+1);

    for(int i = 0 ; i<edges ; i++)                              // input into adjacency list
    {
        int u , v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    dfsOFgraph(nodes , adj_list );


 
    return 0;
}
 
