#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> doublyList;
    int val;

    // // Taking input until -1
    // while (cin >> val && val != -1) {
    //     doublyList.push_back(val);
    // }
    
     
    while (true) {
        cin >> val;
        if (val == -1) break;
        doublyList.push_back(val);
    }

    //  Sort the list
    doublyList.sort();

    //  Remove duplicates
    doublyList.unique();

    // Print the final list
    for (int v : doublyList) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}
