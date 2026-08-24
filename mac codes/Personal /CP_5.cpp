#include <iostream>
using namespace std;
int main () {
    bool hasDegree = true;
    bool hasExperience = false;
    bool knowsCpp = true;
    bool eligible = hasDegree && knowsCpp ;
    bool canApply = hasDegree || hasExperience ;
    bool needsTraining = ! knowsCpp ;
    cout << " Eligible : " << eligible << endl ; 
    cout << "Can Apply : " << canApply << endl ; 
    cout << " Needs Training : " << needsTraining << endl ; 

    return 0;



}