#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> heights(n);
        for (int i = 0; i < n; i++)
            cin >> heights[i];

        int left_index = 0, right_index = n - 1;
        long long max_height = 0;
        int best_left = 0, best_right = n - 1;

        while (left_index < right_index)
        {
            long long current_height = min(heights[left_index], heights[right_index]);

            if (current_height > max_height)
            {
                max_height = current_height;
                best_left = left_index;
                best_right = right_index;
            }

            // Move the pointer at the shorter line
            if (heights[left_index] < heights[right_index])
                left_index++;
            else
                right_index--;
        }

        cout << best_left << " " << best_right << endl;
    }

    return 0;
}
