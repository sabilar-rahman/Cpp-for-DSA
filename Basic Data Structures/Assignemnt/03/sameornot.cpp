// There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

// Note: You need to solve it using  Stack and Queue only.

// Input Format

// First line will contain  and .
// Second line will contain stack  with  values.
// Third line will contain queue  with  values.
// Constraints

// Output Format

// Output YES if they were same, otherwise NO.
// Sample Input 0

// 5 5
// 10 20 30 40 50
// 50 40 30 20 10
// Sample Output 0

// YES
// Sample Input 1

// 4 4
// 10 20 30 40
// 10 20 30 40
// Sample Output 1

// NO

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n1, n2;
    cin >> n1 >> n2;
    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n1; i++)
    {
        int value;
        cin >> value;
        st.push(value);
    }
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    if (n1 != n2)
    {
        cout << "NO" << endl;
        return 0;
    }
    while (st.empty() == false && q.empty() == false)
    {
        if (st.top() == q.front())
        {
            st.pop();
            q.pop();
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}