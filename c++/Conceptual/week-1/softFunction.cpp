#include <bits/stdc++.h>
using namespace std;

int *softFunc()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort in ascending order
    sort(arr, arr + n);
    return arr;
};
int main()
{

    int *return_arr = softFunc();
    for (int i = 0; i < 5; i++)
    {
        cout << return_arr[i] << " ";
    }
    delete[] return_arr;
    return 0;
}