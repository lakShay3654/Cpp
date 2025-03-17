#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    string cls;
    int year;
    float marks;

    void input() {
        cout << "Enter Roll No, Name, Class, Year, and Total Marks: ";
        cin >> roll >> name >> cls >> year >> marks;
    }

    void display() {
        cout << "Roll No: " << roll << "  Name: " << name << endl;
        cout << "Class: " << cls << "  Year: " << year << endl;
        cout << "Total Marks: " << marks << endl;
    }
};

int main() {
    Student students[5];

    // Taking input for 5 students
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].input();
    }

    // Displaying details for all students
    cout << "\nStudent Details:\n";
    for (int i = 0; i < 5; i++) {
        students[i].display();
        cout << "---\n";
    }

    return 0;
}