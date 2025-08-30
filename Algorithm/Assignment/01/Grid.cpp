#include <bits/stdc++.h>
using namespace std;

char gird[100][100];
bool visited[100][100];
vector<pair<int, int>> moved = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

   int n, m;
bool valid (int i,int j){
    if(i<0 || j<0 || i>=n || j>=m) return false;
    return true;

}
void dfs(int si, int sj)
{
    cout << si << " " << sj << endl;
    visited[si][sj] = true;
    for (int i; i < 4; i++)
    {
        int ci, cj;
        ci = si + moved[i].first;
        cj = sj + moved[i].second;
        if (valid(ci, cj)== true && visited[ci][cj] == false)
        {
            continue;
        }
        pair<int, int> child = {ci, cj};
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

    int si, sj;
    cin >> si >> sj;
    memset(visited, false, sizeof(visited));

    dfs(si, sj);

    return 0;
}