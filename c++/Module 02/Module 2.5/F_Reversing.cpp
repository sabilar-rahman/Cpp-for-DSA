#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
   int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }

    for (int k = 0; k < n; k++)
    {
        cout << array[k] << " ";
    }

    return 0;
}