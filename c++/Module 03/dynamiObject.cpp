#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;
    }
};

int main()
{
    Student *rahim = new Student(45, 9, 5.00);
    Student *karim = new Student(2, 5, 4.82);
    cout << rahim->cls << " " << rahim->roll << " " << rahim->gpa << endl;
    cout << karim->cls << " " << karim->roll << " " << karim->gpa << endl;

    return 0;
}