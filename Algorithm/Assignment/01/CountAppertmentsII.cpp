#include <bits/stdc++.h>
using namespace std;

char gird[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> moved = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int room;
int n, m;
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
    room++;
    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + moved[i].first;
        cj = sj + moved[i].second;
        if (valid(ci, cj) == true && visited[ci][cj] == false && gird[ci][cj] != '#')

            dfs(ci, cj);
    }
}
int main()
{

    //  int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> gird[i][j];
        }
    }

    vector<int> apartments;

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && gird[i][j] == '.')
            {
                room = 0;
                dfs(i, j);
                apartments.push_back(room);
            }
        }
    }

    if (apartments.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        sort(apartments.begin(), apartments.end());
        // for (int i = 0; i < apartments.size(); i++)
        // {
        //     cout << apartments[i] << " ";
        // }

        for (int val : apartments)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}