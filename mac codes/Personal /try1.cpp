#include <iostream>
using namespace std;

class Student {

    public:
    string Name;
    int Age;
};

class Teacher {

    private:
    string Name;
    string Subject;

};

int main ()
{
    Student student1;
    student1.Name = "Neil";
    student1.Age = 19;

    cout << "Student Name: " << student1.Name <<endl;
    cout << "Student Age: " << student1.Age <<endl<<endl<<endl;     
    

    Student student2;
    student2.Name = "Aryan";
    student2.Age = 20;

    cout << "Student Name: " << student2.Name <<endl;
    cout << "Student Age: " << student2.Age <<endl;    
    
    return 0; 

}
