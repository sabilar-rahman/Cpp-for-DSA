#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> d = {{-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}};
bool visited[1005][1005];
int N, M;
bool isValid(int x, int y)
{
    if (x >= 0 && x < N && y >= 0 && y < M)
        return true;
    return false;
}
int minSteps(pair<int, int> kni, pair<int, int> que)
{
    queue<pair<pair<int, int>, int>> q;
    q.push({kni, 0});
    visited[kni.first][kni.second] = true;
    while (q.empty() == false)
    {
        pair<pair<int, int>, int> current = q.front();
        q.pop();
        if (current.first == que)
        {
            return current.second;
        }
        // 8 steps
        for (int i = 0; i < 8; i++)
        {
            int moveX = current.first.first + d[i].first;
            int moveY = current.first.second + d[i].second;
            if (isValid(moveX, moveY) && !visited[moveX][moveY])
            {
                q.push({{moveX, moveY}, current.second + 1});
                visited[moveX][moveY] = true;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        cin >> N >> M;
        pair<int, int> kni, que;
        cin >> kni.first >> kni.second;
        cin >> que.first >> que.second;

        memset(visited, false, sizeof(visited));

        int finalMove = minSteps(kni, que);
        cout << finalMove << endl;
    }
    return 0;
}