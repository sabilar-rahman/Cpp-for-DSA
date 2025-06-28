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
    int val;
    cin >> val;

    int flag = 0;

    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == val)
        {
            // cout << mid << endl;
            flag = 1;
            break;
        }
        else if (a[mid] < val)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (flag == 1)
    {
        cout << "Found\n"
             << endl;
    }
    else
    {
        cout << "Not Found\n"
             << endl;
    }

    return 0;
}