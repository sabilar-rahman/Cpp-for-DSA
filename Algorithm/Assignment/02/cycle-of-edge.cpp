

#include <bits/stdc++.h>
using namespace std;

int parent[100005];
int component_size[100005];

// Find leader with path compression
int find_leader(int node)
{
    if (parent[node] == -1)
        return node;
    return parent[node] = find_leader(parent[node]);
}

// Union by size
void union_sets(int node1, int node2)
{
    int leader1 = find_leader(node1);
    int leader2 = find_leader(node2);

    if (leader1 == leader2)
        return;
    // already in same component

    if (component_size[leader1] >= component_size[leader2])
    {
        parent[leader2] = leader1;
        component_size[leader1] += component_size[leader2];
    }
    else
    {
        parent[leader1] = leader2;
        component_size[leader2] += component_size[leader1];
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    memset(parent, -1, sizeof(parent));
    memset(component_size, 1, sizeof(component_size));

    int c_edges = 0;

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;

        int leaderU = find_leader(u);
        int leaderV = find_leader(v);

        if (leaderU == leaderV)
        {
            // This edge would form a cycle
            c_edges++;
        }
        else
        {
            union_sets(u, v);
        }
    }

    cout << c_edges << endl;

    return 0;
}
