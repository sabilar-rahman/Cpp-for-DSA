#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = INT_MIN;
    for (int i; i < n; i++)
    {

        mx = max(a[i], mx);
        // if (a[i] > mx)
        // {
        //     mx = a[i];
        // }
    }
    cout << mx << endl;

    return 0;
}