#include <bits/stdc++.h>
using namespace std;

bool ChooseThree(int arr[], int n, int s) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == s) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;
//   while (T++)
    while (T--) {
        int n, s;
        cin >> n >> s;
       // int a[100];
        int a[1000];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
           // cout << a[i] << " ";
        }

        if (ChooseThree(a, n, s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}