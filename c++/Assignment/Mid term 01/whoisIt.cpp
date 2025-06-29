// #include <bits/stdc++.h> // Using the all-encompassing header

// // Using the standard namespace for convenience
// using namespace std;

// int main() {
//     // A structure to hold student information, defined inside main
//     // This is valid C++ and scopes the struct to the main function.
//     struct Student {
//         int id;
//         string name;
//         char section;
//         int marks;
//     };

//     // Optimize C++ standard streams for faster input/output.
//     // cin.tie(NULL) unties cin from cout.
//     cin.tie(NULL);

//     int t; // Variable to store the number of test cases
//     cin >> t; // Read the number of test cases

//     // Loop through each test case
//     while (t--) {
//         Student best_student; // Variable to store the student with the highest marks
//         // Initialize with values that will be easily overridden or ensure first student is taken
//         best_student.marks = -1; // Marks can be 0, so -1 ensures any valid student is better
//         best_student.id = 1001; // ID is 1 to 3, so a larger ID ensures a smaller valid ID wins in a tie initially

//         // Process 3 students for each test case
//         for (int i = 0; i < 3; ++i) {
//             Student current_student;
//             // Read the details of the current student
//             cin >> current_student.id >> current_student.name >> current_student.section >> current_student.marks;

//             // Compare current_student with best_student
//             // Criterion 1: Higher marks are better
//             if (current_student.marks > best_student.marks) {
//                 best_student = current_student;
//             }
//             // Criterion 2: If marks are tied, smaller ID is better
//             else if (current_student.marks == best_student.marks) {
//                 if (current_student.id < best_student.id) {
//                     best_student = current_student;
//                 }
//             }
//         }

//         // Output the details of the student with the highest marks for the current test case
//         cout << best_student.id << " " << best_student.name << " " << best_student.section << " " << best_student.marks << endl;
//     }

//     return 0; // Indicate successful execution
// }

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int total_marks;

    Student(int id, string name, char section, int total_marks)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->total_marks = total_marks;
    }
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Student *bestStudent = nullptr;

        for (int i = 0; i < 3; i++)
        {
            int id, marks;
            string name;
            char section;
            cin >> id >> name >> section >> marks;

            Student *student = new Student(id, name, section, marks);

            //         if (bestStudent != nullptr) {
            //     delete bestStudent; // IMPORTANT: Delete the old object bestStudent was pointing to
            // }
            if (bestStudent == nullptr ||
                student->total_marks > bestStudent->total_marks ||
                //         if (bestStudent != nullptr) {
                (student->total_marks == bestStudent->total_marks && student->id < bestStudent->id))
            {
                bestStudent = student;
            }
        }

        // Print best student's info
        cout << bestStudent->id << " " << bestStudent->name << " " << bestStudent->section << " " << bestStudent->total_marks << endl;
    }

    return 0;
}
