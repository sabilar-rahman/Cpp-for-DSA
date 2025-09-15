#include <bits/stdc++.h>
using namespace std;

class Entry
{
public:
    string key;
    int value;

    Entry(string key, int value)
    {
        this->key = key;
        this->value = value;
    }
};

// class Compare
class Compare
{
public:
    bool operator()(Entry left, Entry right)
    {
        if (left.key == right.key)
        {
            return left.value < right.value;
        }
        return left.key > right.key;
    }
};

int main()
{
    priority_queue<Entry, vector<Entry>, Compare> pq;

    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        string str;
        int num;
        cin >> str >> num;
        Entry e(str, num);
        pq.push(e);
    }
    // while (pq.empty() == false)

    while (pq.empty()==false)
    {
        Entry topEntry = pq.top();
        cout << topEntry.key << " " << topEntry.value << endl;
        pq.pop();
    }
    return 0;
}
