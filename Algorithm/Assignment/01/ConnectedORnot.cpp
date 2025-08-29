// Problem Statement

// You will be given a directed graph as input. Then you will receive  queries. For each query, you will be given two nodes,  and . You need to determine whether you can go from  to  directly without using any other nodes.

// Input Format

// The first line will contain  and , the number of nodes and the number of edges, respectively. The values of the nodes range from  to .
// Next  lines will contain two node values which means there is a connection from first node to second node.
// The next line will contain .
// The following  lines will each contain  and .
// Constraints

// Output Format

// For each query output YES if it is possible to go from  to  directly without using any other nodes, NO otherwise. Don't forget to put a new line after each query.
// Sample Input 0

// 5 6
// 0 1
// 1 2
// 2 3
// 3 4
// 1 4
// 0 2
// 10
// 0 1
// 1 0
// 2 2
// 2 3
// 0 3
// 3 0
// 1 4
// 4 1
// 4 3
// 1 2
// Sample Output 0

// YES
// NO
// YES
// YES
// NO
// NO
// YES
// NO
// NO
// YES

#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visited[1005];

void dfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (q.empty() == false)
    {
        // ber kore anbo
        int par = q.front();
        q.pop();
        // oi node ke niye kaj
        cout << par << " ";
        // children push kora

        for (int child : adj_list[par])
        {
            // cout << child << " ";
            if (visited[child] == false)
            {
                q.push(child);
                visited[child] = true;
            }
        }
    }
}

int main()
{

    int node, edge;
    cin >> node >> edge;

    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    };
    memset(visited, false, sizeof(visited));

    dfs(0);

    return 0;
}