#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    string section;
    int id;

    // Student(string name, int cls, string section, int id)
    // {
    //     this->name = name;
    //     this->cls = cls;
    //     this->section = section;
    //     this->id = id;
    // }
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id;
    }
    // for reverse
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            string temporary = a[i].section;
            a[i].section = a[j].section;
            a[j].section = temporary;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << endl;
    }

    return 0;
}