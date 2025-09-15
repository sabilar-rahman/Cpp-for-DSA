#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> numbers(size);

    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < size; i++)
    {
        minHeap.push(numbers[i]);
    }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << minHeap.top() << " ";
    //     minHeap.pop();
    // }
    // cout << endl;

    int queries;
    cin >> queries;
    while (queries--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            int value;
            cin >> value;
            minHeap.push(value);

            if (!minHeap.empty())
                cout << minHeap.top() << "\n";
            else
                cout << "Empty\n";
        }
        else if (command == 1)
        {
            if (!minHeap.empty())
                cout << minHeap.top() << "\n";
            else
                cout << "Empty\n";
        }
        else if (command == 2)
        {
            if (!minHeap.empty())
            {
                minHeap.pop();
                if (!minHeap.empty())
                    cout << minHeap.top() << "\n";
                else
                    cout << "Empty\n";
            }
            else
            {
                cout << "Empty\n";
            }
        }
    }

    return 0;
}
