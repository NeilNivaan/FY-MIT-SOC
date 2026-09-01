#include <iostream>
#include <string>
using namespace std;

int main() {
    string cars[6] = {"Volvo", "BMW", "Ford", "Mazda", "Cadillac", "GMC"};
    cout << cars[0]<<"  ";
    cout << cars[1]<<"  ";
    cout << cars[2]<<"  ";
    cout << cars[3]<<"  ";
    cout << cars[4]<<"  ";
    cout << cars[5]<<"  ";  

    cars[2]="Toyota";
    cout << cars[2];

    return 0;
}
