#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    int gpa;
};

int main()
{

    Student rahim;
    rahim.roll = 45;
    rahim.cls = 9;
    rahim.gpa = 5.00;

    Student karim;
    karim.roll = 2;
    karim.cls = 5;
    karim.gpa = 4.82;

    cout << rahim.cls <<" " << rahim.roll<< " " << rahim.gpa<< endl;
    cout << karim.cls <<" " << karim.roll<< " " << karim.gpa<< endl;
}