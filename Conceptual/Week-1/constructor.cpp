#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int mathMark;
    int cls;

    // Corrected constructor with mathMark parameter
    Student(string name, int roll, char section, int mathMark, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->mathMark = mathMark;
        this->cls = cls;
    }
};

int main()
{
    Student salman("Salman", 1, 'A', 80, 8);  // Now this matches the updated constructor
    cout << salman.name << endl;

    return 0;
}
