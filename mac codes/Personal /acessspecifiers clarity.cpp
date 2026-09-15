#include <iostream>
using namespace std;

class Employee {
private:               
    double salary;
    int empID;

public:                
    string name;

    // Constructor
    Employee(string n, double s, int id) {
        name = n;
        salary = s;
        empID = id;
    }
};

int main() {
    Employee emp("Fedrick", 50000, 101);
    cout << "Employee Name: " << emp.name << endl;
    cout << "Employee ID: " << emp.empID << endl;
    cout << "Employee Salary: " << emp.salary << endl;
    return 0;
}