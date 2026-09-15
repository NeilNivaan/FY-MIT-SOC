#include <iostream>
using namespace std;

class Bike {


    public:
    string brand;
    string model;

    string cc;

};

    int main() 
    {
        Bike bike1;
        bike1.brand = "Honda";
        bike1.model = "Rebel";
        bike1.cc = "300cc";

        Bike bike2;
        bike2.brand = "Yamaha";
        bike2.model = "R15";
        bike2.cc = "155cc"; 

        Bike bike3;
        bike3.brand = "KTM";
        bike3.model = "Duke";
        bike3.cc = "390cc";

        Bike bike4;
        bike4.brand = "Suzuki";
        bike4.model = "Gixxer";
        bike4.cc = "155cc"; 

        Bike bike5;
        bike5.brand = "Bajaj";
        bike5.model = "Pulsar";
        bike5.cc = "220cc";


        cout << "Bike 1: " << bike1.brand << " " << bike1.model << " " << bike1.cc << endl;     
        cout << "Bike 2: " << bike2.brand << " " << bike2.model << " " << bike2.cc << endl;     
        cout << "Bike 3: " << bike3.brand << " " << bike3.model << " " << bike3.cc << endl;     
        cout << "Bike 4: " << bike4.brand << " " << bike4.model << " " << bike4.cc << endl;     
        cout << "Bike 5: " << bike5.brand << " " << bike5.model << " " << bike5.cc << endl;     

        return 0;

    }