#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    int marks;
    char grade;
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    vector<Student> students(numStudents);
    int totalMarks = 0;
    int highestMarks = 0;
    int lowestMarks = 100;

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> students[i].marks;

        totalMarks += students[i].marks;
        if (students[i].marks > highestMarks) {
            highestMarks = students[i].marks;
        }
        if (students[i].marks < lowestMarks) {
            lowestMarks = students[i].marks;
        }

        if (students[i].marks >= 90) {
            students[i].grade = 'A';
        } else if (students[i].marks >= 80) {
            students[i].grade = 'B';
        } else if (students[i].marks >= 70) {
            students[i].grade = 'C';
        } else if (students[i].marks >= 60) {
            students[i].grade = 'D';
        } else {
            students[i].grade = 'F';
        }
    }

    double averageGrade = static_cast<double>(totalMarks) / numStudents;

    cout << "\nStudent Grades:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Name: " << students[i].name << "\tMarks: " << students[i].marks << "\tGrade: " << students[i].grade << endl;
    }

    cout << "\nClass Average Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestMarks << endl;
    cout << "Lowest Grade: " << lowestMarks << endl;

    return 0;
}

