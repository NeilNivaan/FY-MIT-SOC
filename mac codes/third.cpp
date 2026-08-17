#include <iostream>
using namespace std;

int main ()
{
    float p, r, t, in;
    cout <<"CALCULATE SIMPLE INTEREST USING C++" <<endl;

    cout << "Enter the principle amount" <<endl;
    cin >> p;

    cout <<"Enter the rate of interst " <<endl;
    cin >> r;

    cout << "Enter the time of loan " <<endl;
    cin >> t;

    in = p * r * t / 100;

    cout << "The interst amounts to = " << in; 

    return 0;
}





