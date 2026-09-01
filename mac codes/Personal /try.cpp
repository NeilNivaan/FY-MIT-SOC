#include <iostream>
using namespace std;

class Car {

    public:
    string Brand;
    string Model;
    int Speed;
    string Color;
};

int main ()
{
    Car car1;
    car1.Brand = "BMW";
    car1.Model = "X5";
    car1.Speed = 250;
    car1.Color = "Blue";

    cout << "Car Brand: " << car1.Brand <<endl;
    cout << "Car Model: " << car1.Model <<endl;
    cout << "Car Speed: " << car1.Speed <<endl;
    cout << "Car Color: " << car1.Color <<endl<<endl<<endl;     
    

    Car car2;
    car2.Brand = "Mahindra";
    car2.Model = "Thar";
    car2.Speed = 180;
    car2.Color = "Black";

    cout << "Car Brand: " << car2.Brand <<endl;
    cout << "Car Model: " << car2.Model <<endl;
    cout << "Car Speed: " << car2.Speed <<endl;
    cout << "Car Color: " << car2.Color <<endl;    
    
    return 0; 

}