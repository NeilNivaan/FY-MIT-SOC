#include <iostream>
 using namespace std;
int main() {
     char ch = 'A';

    cout << "Character: " << ch << endl;
    cout << "ASCII Value: " << (int)ch << endl; 

    char next = ch + 1;  
    cout << "Next character: " << next << endl;

    char lower = 'a';
    char upper = lower - 32; // 'A'
    cout << "Lowercase: " << lower << endl; 
    return 0; 

}