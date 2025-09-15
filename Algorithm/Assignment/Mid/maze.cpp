
#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool visited[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> moved = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool isValid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#' && !visited[i][j];
}
void bfs(int startX1, int startY1, int endX1, int endY1)
{
    queue<pair<int, int>> q;
    q.push({startX1, startY1});
    visited[startX1][startY1] = true;
    parent[startX1][startY1] = {-1, -1};
    while (q.empty() == false)
    {
        pair<int, int> curentNode = q.front();
        // pop from queue
        q.pop();
        int ci = curentNode.first;
        int cj = curentNode.second;
        if (ci == endX1 && cj == endY1)
        {
            pair<int, int> tempNode = {ci, cj};
            while (tempNode != make_pair(-1, -1))
            {
                if (grid[tempNode.first][tempNode.second] != 'R' && grid[tempNode.first][tempNode.second] != 'D')
                {
                    grid[tempNode.first][tempNode.second] = 'X';
                }
                tempNode = parent[tempNode.first][tempNode.second];
            }
            break;
        }
        // moves four times
        for (int k = 0; k < 4; k++)
        {
            int ni = ci + moved[k].first;
            int nj = cj + moved[k].second;
            if (isValid(ni, nj))
            {
                visited[ni][nj] = true;
                parent[ni][nj] = {ci, cj};
                q.push({ni, nj});
            }
        }
    }
}

int main()
{
    cin >> n >> m;

        // // cell start
    // int startX11, startY11;
    // // end
    // int endX2, endY2;

    int startX1 = -1, startY1 = -1, endX1 = -1, endY1 = -1;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                startX1 = i;
                startY1 = j;
            }
            else if (grid[i][j] == 'D')
            {
                endX1 = i;
                endY1 = j;
            }
        }
    }
    if (startX1 != -1 && startY1 != -1 && endX1 != -1 && endY1 != -1)
    {
        bfs(startX1, startY1, endX1, endY1);
        // n times move
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            cout << grid[i] << endl;
        }
    }
    return 0;
}