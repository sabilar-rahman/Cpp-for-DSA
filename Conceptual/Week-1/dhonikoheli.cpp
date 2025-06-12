#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jerseyNo;
    string country;
};
int main()
{

    // Cricketer dhoni;
    Cricketer *dhoniPointer = new Cricketer; // thats dynamic
    (*dhoniPointer).jerseyNo = 7;
    dhoniPointer->country = "India";


    Cricketer *kohili = new Cricketer;
    kohili = dhoniPointer;

    cout << "Dhoni Jersey No: " << dhoniPointer->jerseyNo << endl;
    cout << "Dhoni Country: " << dhoniPointer->country << endl;
    cout << "Kohli Jersey No: " << kohili->jerseyNo << endl;
    cout << "Kohli Country: " << kohili->country << endl;
 
  

    return 0;
}