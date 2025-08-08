// There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

// Note: You cannot use any  here. You need to implement the stack and queue by yourself. You can use linked list or array as you want.

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
// Sample Input 2

// 5 4
// 1 2 3 4 5
// 5 4 3 2
// Sample Output 2

// NO

#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};



class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    };
};

int main()
{
    myStack st;

    myQueue q;

    int n1, n2;
    cin >> n1 >> n2;

    for (int i=0; i < n1; i++)
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
