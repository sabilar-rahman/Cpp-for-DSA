// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int cls;
//     string section;
//     int id;
//     int math_marks;
//     int english_marks;
//     int total_mark;

//     // Student(string name, int cls, string section, int id)
//     // {
//     //     this->name = name;
//     //     this->cls = cls;
//     //     this->section = section;
//     //     this->id = id;
//     // }
// };

// int main()
// {
//     int n;
//     cin >> n;
//     Student a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].english_marks >> a[i].total_marks;
//     }

//     // total marks ---
//     // for (int i = 0; i < n; i++)
//     // {
//     //     a[i].math_marks += a[i].english_marks;
//     // }

//     sort(a, a + n, [](Student first, Student second)
//          {
//              first.total_marks = first.math_marks + first.english_marks;
//              second.total_marks = second.math_marks + second.english_marks;
//              if(first.total_mark == second.total_mark){
//                  return first.id < second.id;
//              }else{
//                  return first.total_mark > second.total_mark;
//              }
//          });

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math_marks << " " << a[i].english_marks << endl;
//     }

//     return 0;
// }

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
    int total_marks;
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
        a[i].total_marks = a[i].math_marks + a[i].english_marks;
    }

    sort(a, a + n, [](Student first, Student second)
         {
             //  if (first.total_marks == second.total_marks)
             //  {
             //      return first.id < second.id;
             //  }
             //  else
             //  {
             //      return first.total_marks > second.total_marks;
             //  }
            return (first.total_marks == second.total_marks) ? (first.id < second.id) : (first.total_marks > second.total_marks); });

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " "
             << a[i].math_marks << " " << a[i].english_marks << endl;
    }

    return 0;
}
