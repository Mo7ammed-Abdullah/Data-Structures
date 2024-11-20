#include<bits/stdc++.h>
using namespace std;

void BFS(int n , vector<vector<int>> &adj_list)
{
    vector<int> visited(n+1,0);                     // vector to keep track of visited nodes
    queue<int> q;                                   

    int start_node;
    cin>>start_node;

    visited[start_node] = 1;                        // first node visited
    q.push(start_node);                             // push it in queue to visit its neighbour                            

    cout<<"BFS TRAVERSAL: ";
    while(!q.empty())
    {
        int node = q.front();                       // take out the front node from the queue
        q.pop();

        cout<<node<<" ";
        for(auto neighbour : adj_list[node])        // and visit its neighbour
        {
            if(!visited[neighbour])
            {
                visited[neighbour] = 1;             // if the neighbour node is not visited , push them in queue to visit his neighbours
                q.push(neighbour);
            }
        }
    }
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
    BFS(nodes , adj_list );


 
    return 0;
}
 
