// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         string Str;
//         cin >> Str;
//         stack<char> st;

//         for (char character : Str)
//         {
//             if (st.empty() == false)
//             {
//                 if ((character == '0' && st.top() == '1') ||
//                     (character == '1' && st.top() == '0'))
//                 {
//                     st.pop(); // pair removed
//                 }
//                 else
//                 {
//                     st.push(character); // no match, push
//                 }
//             }
//             else
//             {
//                 st.push(character); // stack empty, push
//             }
//         }

//         // if (st.empty())
//         //     cout << "YES\n";
//         // else
//         //     cout << "NO\n";

//         (st.empty()) ? cout << "YES\n" : cout << "NO\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        stack<char> st;

        for (char c : s)
        {

            // if (st.empty() == false)
            // {
            //     if ((c == '0' && st.top() == '1') ||
            //         (c == '1' && st.top() == '0'))
            //     {
            //         st.pop(); // pair removed
            //     }
            // }

            if (st.empty() == false && c != st.top())
                st.pop();
            else
                st.push(c);
        }

        // if (st.empty())
        //     cout << "YES\n";
        // else
        //     cout << "NO\n";

        cout << (st.empty() ? "YES\n" : "NO\n");
    }
    return 0;
}