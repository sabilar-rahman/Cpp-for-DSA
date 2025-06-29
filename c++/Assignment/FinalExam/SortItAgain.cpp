#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    string section;
    int id;
    int math_marks;
    int english_marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].english_marks;
        // for total marks of math and eng
        //  a[i].total_marks = a[i].math_marks + a[i].english_marks;
    }

    sort(a, a + n, [](Student first, Student second)
         {
        if (first.english_marks == second.english_marks)
        {
            if (first.math_marks == second.math_marks)
                return first.id < second.id;
            else
                return first.math_marks > second.math_marks;
        }
        else
        {
            return first.english_marks > second.english_marks;
        } });

    // return (first.total_marks == second.total_marks) ? (first.id < second.id) : (first.total_marks > second.total_marks);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " "
             << a[i].math_marks << " " << a[i].english_marks << endl;
    }

    return 0;
}
