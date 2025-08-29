#include <bits/stdc++.h>
using namespace std;
const int MaxValue = 1000;
vector<int> adj_matrix[MaxValue];

bool directEdge(int startPoint, int endPoint)
{
    for (int nearest : adj_matrix[startPoint])
    {
        if (nearest == endPoint)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_matrix[a].push_back(b);
    }
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int first, second;
        cin >> first >> second;
        // if (first == second || hasDirectEdge(first, second)) {
        //     cout << "YES" << endl;
        // }
        // else {
        //     cout << "NO" << endl;
        // }
        (first == second || directEdge(first, second)) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}