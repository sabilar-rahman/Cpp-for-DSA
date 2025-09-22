#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        string word1, word2;
        cin >> word1 >> word2;

        // Sort both words to compare character order
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());

        // If sorted strings are equal they are anagrams
        // if (word1 == word2)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
    
        (word1 == word2) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
