#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long index;
    cin >> index;

    // Handle base cases directly
    // if (n == 0) { cout << 0 << endl; return 0; }
    // if (n == 1 || n == 2) { cout << 1 << endl; return 0; }
    // if (n == 3) { cout << 2 << endl; return 0; }

    // Create an array to store computed Tetranacci numbers
    vector<long long> tetranacci(index + 1);

    // Base cases
    tetranacci[0] = 0;
    tetranacci[1] = 1;
    tetranacci[2] = 1;
    tetranacci[3] = 2;

    // Bottom-up calculation using the recurrence relation
    for (int i = 4; i <= index; i++)
    {
        tetranacci[i] = tetranacci[i - 1] + tetranacci[i - 2] + tetranacci[i - 3] + tetranacci[i - 4];
    }

    // Output the nth Tetranacci number
    cout << tetranacci[index] << endl;
    return 0;
}
