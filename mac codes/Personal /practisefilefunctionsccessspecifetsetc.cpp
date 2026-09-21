#include <iostream>
#include <string>
using namespace std;

class Student {

    private:
        string name;
        float marks1;
        float marks2;
        float marks3;

    public:
        void setDetails(string n, float m1, float m2, float m3) {
            name = n;
            marks1 = m1;
            marks2 = m2;
            marks3 = m3;
        }

        float calculateAverage();
        void displayDetails();
};


float Student::calculateAverage() {
    return (marks1 + marks2 + marks3) / 3;
}

void Student::displayDetails() {
    cout << "Name: " << name << endl;
    cout << "Marks 1: " << marks1 << endl;
    cout << "Marks 2: " << marks2 << endl;
    cout << "Marks 3: " << marks3 << endl;
    cout << "Average: " << calculateAverage() << endl;
}

int main() {

    Student s1;

    string name;
    float marks1, marks2, marks3;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter marks 1: ";
    cin >> marks1;

    cout << "Enter marks 2: ";
    cin >> marks2;

    cout << "Enter marks 3: ";
    cin >> marks3;

    s1.setDetails(name, marks1, marks2, marks3);

    s1.displayDetails();

    return 0;
}