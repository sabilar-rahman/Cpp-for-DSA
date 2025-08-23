#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];


void dfs(int scr){

    // base case
    cout<< scr <<" ";
    vis[scr]=true;
    for (int child: adj_list[scr])
    {
        if(vis[child]== false)
        dfs(child);
    }
    

}
int main()
{
    int n, e;
    cin >> n >> e;
    // vector<int> adj_list[n];
    // for(int i=0;i<e;i++)
    // {
    //     int a,b;
    //     cin>>a>>b;
    //     adj_list[a].push_back(b);
    //     adj_list[b].push_back(a);
    // }

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    dfs(0);

    return 0;
}