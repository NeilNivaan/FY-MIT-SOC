#include <iostream>
using namespace std;

int main ()
{
    float B, L, V, MF;
    cout <<"CALCULATE THE MOTIONAL EMF USING C++:" <<endl;

    cout << "Enter the Magnetic Field (B)in B " <<endl;
    cin >> B;

    cout <<"Enter the length (in m)  " <<endl;
    cin >> L;

    cout << "Enter the Velocity (in m/s) " <<endl;
    cin >> V;

    MF = B * L * V ;

    cout << "The Motional EMF is = " << MF; 
    
    return 0;
}


