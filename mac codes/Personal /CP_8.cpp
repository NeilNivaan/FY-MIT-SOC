#include <iostream>
using namespace std;
int main() { 
    char ch = 'A';
    cout << "Character: " << ch << endl;
    cout << "ASCII Value: " << (int)ch << endl;
    char next = ch + 1;
    char prev = ch - 1;
    cout << "Next character: " << next << endl;
    cout << "Previous character: " << prev << endl;
    char lower = 'a' ;
    char upper = lower - 32;
    cout << "Lowercase: " << lower << endl;
    cout << "Uppercase: " << upper << endl;
    return 0;
}