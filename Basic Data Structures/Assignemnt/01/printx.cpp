// Problem Statement

// You will be given an positive odd integer N, you need to print the pattern for it. See sample input and output for understanding the pattern.

// Input Format

// Input will contain only N.
// Constraints

// 1 <= N <= 20 and N is odd.
// Output Format

// Output the pattern.
// Sample Input 0

// 5
// Sample Output 0

// \   /
//  \ /
//   X
//  / \ 
// /   \
// Sample Input 1

// 7
// Sample Output 1

// \     /
//  \   /
//   \ /
//    X
//   / \  
//  /   \ 
// /     \
// Sample Input 2

// 3
// Sample Output 2

// \ /
//  X
// / \
// Sample Input 3

// 1
// Sample Output 3

// X

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int middlePoint = n / 2;
    // first
    for (int i = 0; i < n; i++)
    { // second
        for (int j = 0; j < n; j++)
        {

            // if (j == i && i + j == n - 1) {
            //     // middle X
            //     cout << "X";
            // }
            // middle
            if (i == middlePoint && j == middlePoint)
            {
                cout << "X";
            }
            // upper
            else if (i < middlePoint && j == i)
            {
                cout << "\\";
            }
            else if (i < middlePoint && j == n - 1 - i)
            {
                cout << "/";
            }
            // lower
            else if (i > middlePoint && j == n - 1 - i)
            {
                cout << "/";
            }
            else if (i > middlePoint && j == i)
            {
                cout << "\\";
            }
            // free space
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
