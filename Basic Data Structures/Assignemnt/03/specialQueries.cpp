// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     list<string>ticketline;
//     while(n--){
//         int command;
//         cin>>command;
//         if(command==0){
//             string name;
//             cin>>name;
//             ticketline.push_back(name);
//         }
//         else if(command==1){
//             if(!ticketline.empty()){
//                 cout<<ticketline.front()<<endl;
//                 ticketline.pop_front();
//             }
//             else{
//                 cout<<"Invalid"<<endl;
//             }
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<string> q;

    while (n--)
    {
        int value;
        cin >> value;
        if (value == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else if (value == 1)
        {
            // if (!q.empty()) {
            //     cout << q.front() << endl;
            //     q.pop();
            // } else {
            //     cout << "Invalid" << endl;
            // }

            (q.empty() == false) ? (cout << q.front(), q.pop(), cout << endl) : (cout << "Invalid" << endl);
        }
    }
    return 0;
}
