#include <bits/stdc++.h>
using namespace std;
int n, m;
char gird[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> moved = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return false;
    return true;
}

int dfs(int si, int sj)
{
    // cout << si << " " << sj << endl;
    visited[si][sj] = true;
    int area = 1;

    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + moved[i].first;
        cj = sj + moved[i].second;
        if (valid(ci, cj) == true && visited[ci][cj] == false && gird[ci][cj] == '.')

            // dfs(ci, cj);
            area += dfs(ci, cj);
    }
    return area;
}

int main()

{
    cin >> n >> m;
    // int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> gird[i][j];
        }
    }
    memset(visited, false, sizeof(visited));

    int smallSize = INT_MAX;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visited[i][j] == false && gird[i][j] == '.')
            {
                int area = dfs(i, j);
                smallSize = min(smallSize, area);
                found = true;
            }
        }
    }

    if (found == false)
        cout << -1 << endl;
    else
        cout << smallSize << endl;

    return 0;
}