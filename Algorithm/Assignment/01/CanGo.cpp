#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool bfs(int sx, int sy, int tx, int ty) {
    queue<pair<int,int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;

    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        if (x == tx && y == ty) return true; // reached B

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (!visited[nx][ny] && (grid[nx][ny] == '.' || grid[nx][ny] == 'B')) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
    return false;
}

int main() {
    cin >> n >> m;
    grid.resize(n);

    int ax, ay, bx, by;
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'A') ax = i, ay = j;
            if (grid[i][j] == 'B') bx = i, by = j;
        }
    }

    visited.assign(n, vector<bool>(m, false));

    if (bfs(ax, ay, bx, by)) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
