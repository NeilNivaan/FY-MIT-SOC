#include <iostream>
using namespace std;

int main ()
{
    double speed, time, distance;
    cout <<"CALCULATE THE DISTANCE WITH SPEED AND TIME USING C++:" <<endl;
    cout <<"Enter the Speed(in m/s)  ";
    cin >> speed;
    cout <<"Enter the time(s) ";
    cin >> time;
    distance = speed * time;
    cout << "The distance (in m) is = "<<distance;
    
    return 0;
}


