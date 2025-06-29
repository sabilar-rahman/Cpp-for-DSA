// Problem Statement

// You will be given an arrayay A of size N. Print "YES" if there is any duplicate value in the arrayay, "NO" otherwise.

// Input Format

// First line will contain N.
// Second line will contain the arrayay A.
// Constraints

// 1 <= N <= 100000
// 0 <= A[i] <= 10^9; Where 0 <= i < N
// Output Format

// Output "YES" or "NO" without the quotation marks according to the problem statement.
// Sample Input 0

// 5
// 1 2 3 4 5
// Sample Output 0

// NO
// Sample Input 1

// 6
// 2 1 3 5 2 1 
// Sample Output 1

// YES


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
    // sort
    sort(array, array + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] == array[i + 1])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    
    return 0;
}