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
void dfs(int si, int sj)
{
    // cout << si << " " << sj << endl;
    visited[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + moved[i].first;
        cj = sj + moved[i].second;
        if (valid(ci, cj) == true && visited[ci][cj] == false && gird[ci][cj] == '.')

            dfs(ci, cj);
    }
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

    // cell start
    int startX1, startY1;
    // end
    int endX2, endY2;

    cin >> startX1 >> startY1 >> endX2 >> endY2;

    if (gird[startX1][startY1] == '-' || gird[endX2][endY2] == '-')
    {
        cout << "NO\n";
        return 0;
    }

    dfs(startX1, startY1);

    if (visited[endX2][endY2])
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}