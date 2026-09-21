#include <iostream>
#include <string>
using namespace std;
class Employee {
    private:
    int empID;
    string name;
    float basicSalary;
    float bonus;
    float totalSalary;

    public:
    Employee() : empID(0), name("unknown"), basicSalary(0), bonus(0), totalSalary(0)
    {
        cout << "Default constructor called"<<endl;

    }
    Employee(int id, string n, float salary, float b){
        empID = id;
        name = n;
        basicSalary = salary;
        bonus = b;
        calculateTotalSalary();
        cout <<"Parameterized constructor called "<<endl;
    }

    void calculateTotalSalary()
    {
        totalSalary = basicSalary + bonus;
    }

    void display() const {
        cout <<"Employee ID: " <<empID<<endl;
        cout << "Name:" << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus:" << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    
    }

};

int main() {
    Employee emp1;
    emp1.display();
    Employee emp2(101, "JD VANCE", 50000, 10000);
    emp2.display();

    return 0;



    
}


