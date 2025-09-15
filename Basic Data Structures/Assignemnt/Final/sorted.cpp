#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int size;
        cin >> size;

        // set is a collection of unique elements
        set<int> uniqueNumbers;

        // input
        for (int i = 0; i < size; i++)
        {
            int value;
            cin >> value;
            uniqueNumbers.insert(value);
        }

        // output
        for (auto element : uniqueNumbers)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}
