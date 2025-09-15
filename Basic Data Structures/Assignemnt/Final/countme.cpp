#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        string line;

        getline(cin >> ws, line);

        stringstream stream(line);
        string token;

        map<string, int> freq;
        string commonWord;
        // int highest = 0;
        int highest = 0;

        while (stream >> token)
        {
            freq[token]++;


            if (freq[token] > highest)

            {
                highest = freq[token];
                commonWord = token;
            }
        }
        cout << commonWord << " " << highest << endl;
    }
    return 0;
}
