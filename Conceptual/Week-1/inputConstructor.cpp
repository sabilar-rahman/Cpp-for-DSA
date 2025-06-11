#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int mathMark;
    char cls;
};

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Student temporary;
        cin >> temporary.name >> temporary.roll >> temporary.section >> temporary.mathMark >> temporary.cls; // Corrected Input Order
        cout << temporary.name << " " << temporary.roll << " " << temporary.section << " " << temporary.mathMark << " " << temporary.cls << endl;
    }

    return 0;
}