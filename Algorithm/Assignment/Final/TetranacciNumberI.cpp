#include <bits/stdc++.h>
using namespace std;

int memo[50];

int tetranacciRecursive(int index)
{
    if (index == 0)
        return 0;
    if (index == 1 || index == 2)
        return 1;
    if (index == 3)
        return 2;

    // If already computed, return the stored result
    if (memo[index] != -1)
        return memo[index];
    // Recurrence relation:
    // Tn = T(n-1) + T(n-2) + T(n-3) + T(n-4)
    memo[index] = tetranacciRecursive(index - 1) + tetranacciRecursive(index - 2) + tetranacciRecursive(index - 3) + tetranacciRecursive(index - 4);

    return memo[index];
}

int main()
{
    int index;
    cin >> index;
    // not calculated yet
    memset(memo, -1, sizeof(memo));
    cout << tetranacciRecursive(index) << endl;
    return 0;
}
