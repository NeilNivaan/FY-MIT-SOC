#include <iostream>
using namespace std;
int main () {
    
    char initial = 'N';
    char symbol = '5';
    char grade = '@';
    char letter = 'A';
    char digit = '5';
    char special = '@';
    char space = ' ' ;
    int number = 5;
    
    cout << "Letter: " << letter << endl; 
    cout << "Digit: " << digit << endl; 
    cout << "Special: " << special << endl;
    cout << "Space: " << space << endl;
    
    cout  << "Size of Char: "<< sizeof(char) << " bytes "<<endl;
    cout  << "Size of INT: "<< sizeof(int) << " bytes "<<endl;
    return 0; 
    
}