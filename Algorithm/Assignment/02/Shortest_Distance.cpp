#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    long long int adj_mat[n + 1][n + 1];
    // initialize adjacency matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                adj_mat[i][j] = 0;
            else
                adj_mat[i][j] = LLONG_MAX;
        }
    }

    // input edges
    while (e--)
    {
        // a = source, b = destination, c = cost
        long long int a, b, c;
        cin >> a >> b >> c;
        adj_mat[a][b] = min(adj_mat[a][b], c);
    }

    // Floyd-Warshall algorithm
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj_mat[i][k] != LLONG_MAX && adj_mat[k][j] != LLONG_MAX && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
                {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }

    // queries
    int q;
    cin >> q;
    while (q--)
    {
        int src, dest;
        cin >> src >> dest;
        if (adj_mat[src][dest] == LLONG_MAX)
            cout << -1 << endl;
        else
            cout << adj_mat[src][dest] << endl;
    }
    return 0;
}