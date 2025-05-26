#include <bits/stdc++.h>
using namespace std;
/**
 * This program dynamically allocates an array of size 5, reads 5 integers from
 * standard input into the array, and then outputs these integers to standard output.
 */

int main()
{
    // int a[5];
    int *a = new int[5]; 
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
