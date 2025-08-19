#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; j++)
        {
            adj[i][j] = 0;
        }
    }

    // memset(adj,0,sizeof(adj)); // builtin func

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
    }

    return 0;
}