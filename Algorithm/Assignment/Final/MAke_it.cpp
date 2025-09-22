#include <bits/stdc++.h>
using namespace std;

int memo[1005];

// Recursive function to check if we can reach 'goal' from 'current'
int canReachTarget(int current, int goal)
{
    if (current == goal)
        return 1;
    if (current > goal)
        return 0;

    if (memo[current] != -1)
        return memo[current];

    // Try both operations: +3 and *2
    memo[current] = canReachTarget(current + 3, goal) || canReachTarget(current * 2, goal);

    return memo[current];
}

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int goalNumber;
        cin >> goalNumber;

        memset(memo, -1, sizeof(memo));

        // cout << (canReachTarget(1, goalNumber) ? "YES" : "NO") << endl;
        if (canReachTarget(1, goalNumber))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
