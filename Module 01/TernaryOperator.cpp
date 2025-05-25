#include <iostream>
using namespace std;
int main()
{
    // need to user input
    int x;
    cout << "Enter a number:";
    cin >> x;
    x % 2 == 0 ? cout << "Even" << endl : cout << "Odd" << endl;

    // int x = 10;
    // x % 2 == 0 ? cout << "Even" << endl : cout << "Odd" << endl;
    return 0;
}