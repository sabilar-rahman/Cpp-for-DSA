#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    list<int> doublyList;

    while (Q--)
    {
        int index, value;
        cin >> index >> value;

        if (index == 0)
        {
            // Insert at head
            doublyList.push_front(value);
        }
        else if (index == 1)
        {
            // Insert at tail
            doublyList.push_back(value);
        }
        else if (index == 2)
        {
            // Delete at index Value (if valid)
            if (value < static_cast<int>(doublyList.size()))
            {
                auto pointer = doublyList.begin();
                // advance(pointer, value);
                for (int i = 0; i < value; i++)
                {
                    pointer++;
                }
                doublyList.erase(pointer);
            }
        }

        // Print from left to right
        cout << "L -> ";
        for (int val : doublyList)
        {
            cout << val << " ";
        }
        cout << endl;

        // Print from right to left
        // cout << "R -> ";
        // for (auto pointer = doublyList.rbegin();
        //      pointer != doublyList.rend(); pointer++)
        // {
        //     cout << *pointer << " ";
        // }
        // cout << endl;

        cout << "R -> ";
        auto pointer = doublyList.end();
        while (pointer != doublyList.begin())
        {
            pointer--;
            cout << *pointer << " ";
        }
        cout << endl;
    }

    return 0;
}
