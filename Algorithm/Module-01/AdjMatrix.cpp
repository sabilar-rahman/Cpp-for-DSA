#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = 0;
        }
    }

    // memset(adj, 0, sizeof(adj)); // builtin func

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] = 1;
        // adj[b][a] = 1;// if i want undirected
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}