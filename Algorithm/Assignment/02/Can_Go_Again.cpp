#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    // a = source, b = destination, c = cost
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

vector<Edge> edge_list;
int n, e;

int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    int src;
    cin >> src;

    int q;
    cin >> q;
    vector<int> queries(q);
    for (int i = 0; i < q; i++)
        cin >> queries[i];

    vector<long long> dist(n + 1, LLONG_MAX);
    dist[src] = 0;

    // Bellman-Ford Relaxation
    for (int i = 1; i <= n - 1; i++)
    {
        bool changed = false;
        for (auto &edge : edge_list)
        {
            if (dist[edge.a] != LLONG_MAX && dist[edge.a] + edge.c < dist[edge.b])
            {
                dist[edge.b] = dist[edge.a] + edge.c;
                changed = true;
            }
        }
        if (!changed)
            break;
    }

    // Negative cycle detection
    for (auto &edge : edge_list)
    {
        if (dist[edge.a] != LLONG_MAX && dist[edge.a] + edge.c < dist[edge.b])
        {
            cout << "Negative Cycle Detected" << endl;
            return 0;
        }
    }

    // Answer queries
    for (int d : queries)
    {
        if (dist[d] == LLONG_MAX)
            cout << "Not Possible" << endl;
        else
            cout << dist[d] << endl;
    }

    return 0;
}
