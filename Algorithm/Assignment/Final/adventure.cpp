#include <bits/stdc++.h>
using namespace std;

int itemWeight[1005], itemValue[1005];
int memo[1005][1005];

// Recursive function with memoization
int knapsack(int index, int mx_weight)
{
    if (index < 0 || mx_weight <= 0)
        return 0;

    if (memo[index][mx_weight] != -1)
        return memo[index][mx_weight];

    // If current item can be taken
    if (itemWeight[index] <= mx_weight)
    {
        int takeItem = knapsack(index - 1, mx_weight - itemWeight[index]) + itemValue[index];
        int skipItem = knapsack(index - 1, mx_weight);

        memo[index][mx_weight] = max(takeItem, skipItem);
    }
    else
    {
        // Cannot take current item, skip it
        memo[index][mx_weight] = knapsack(index - 1, mx_weight);
    }

    return memo[index][mx_weight];
}

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int numItems, max_capacity;
        cin >> numItems >> max_capacity;

        for (int i = 0; i < numItems; i++)
            cin >> itemWeight[i];
        for (int i = 0; i < numItems; i++)
            cin >> itemValue[i];

        // Initialize memoization table
        for (int i = 0; i <= numItems; i++)
            for (int j = 0; j <= max_capacity; j++)
                memo[i][j] = -1;

        cout << knapsack(numItems - 1, max_capacity) << endl;
    }
    return 0;
}
