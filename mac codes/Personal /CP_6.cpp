#include <iostream>
using namespace std;
int main () {
    int age;
    bool isCitizen;
    bool hasVoterID;

    cout<< "Enter your age: ";  
    cin >> age;
    cout<< "Are you a citizen? (1 for Yes, 0 for No): ";  
    cin >> isCitizen;
    cout<< "Do you have a voter ID? (1 for Yes, 0 for No): ";  
    cin >> hasVoterID;

    bool isAdult = (age >= 18);
    bool canVote = isAdult && isCitizen && hasVoterID;
    
    if (canVote){
        cout << "You are eligible to vote." << endl;
    }
    else {
        cout << "You are not eligible to vote." << endl;
    }

    if (!isAdult) {
        cout << "You must be an adult to vote." << endl;
    }

    if (!isCitizen) {
        cout << "You must be a citizen to vote." << endl;
    }

    if (!hasVoterID) {
        cout << "You must have a voter ID to vote19." << endl;
    }
    return 0;
}