#include <bits/stdc++.h>
using namespace std;

// Student class
class Student
{
public:
    string fullName;
    int Roll;
    int Marks;

    Student() {}
    Student(string fullName, int Roll, int Marks)
    {
        this->fullName = fullName;
        this->Roll = Roll;
        this->Marks = Marks;
    }
};

// Comparator class
class Comparator
{
public:
    bool operator()(const Student &a, const Student &b) const
    {
        if (a.Marks != b.Marks)
            return a.Marks < b.Marks;
        return a.Roll > b.Roll;
    }
};

int main()
{
    int total;
    cin >> total;

    priority_queue<Student, vector<Student>, Comparator> maxHeap;

    // Input
    for (int i = 0; i < total; i++)
    {
        string nm;
        int Roll, sc;
        cin >> nm >> Roll >> sc;
        maxHeap.push(Student(nm, Roll, sc));
    }
    

    int queries;
    cin >> queries;

    while (queries--)
    {
        int command;
        cin >> command;

        // Operations
        if (command == 0)
        {
            string nm;
            int Roll, sc;
            cin >> nm >> Roll >> sc;
            maxHeap.push(Student(nm, Roll, sc));

            if (maxHeap.empty() == false)
            {
                Student topStudent = maxHeap.top();
                cout << topStudent.fullName << " " << topStudent.Roll << " " << topStudent.Marks << "\n";
            }
            else
                cout << "Empty\n";
        }
        else if (command == 1)
        {
            if (maxHeap.empty() == false)
            {
                Student topStudent = maxHeap.top();
                cout << topStudent.fullName << " " << topStudent.Roll << " " << topStudent.Marks << "\n";
            }
            else
                cout << "Empty\n";
        }
        else if (command == 2)
        {
            if (maxHeap.empty()==false)
                maxHeap.pop();

            if (maxHeap.empty() == false)
            {
                Student topStudent = maxHeap.top();
                cout << topStudent.fullName << " " << topStudent.Roll << " " << topStudent.Marks << "\n";
            }
            else
                cout << "Empty\n";
        }
    }

    return 0;
}
