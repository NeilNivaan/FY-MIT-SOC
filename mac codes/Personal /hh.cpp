#include <iostream> 
#include <cctype> 
using namespace std;
int main() { 
    char ch = 'a';
cout << "isalpha('a'): " << isalpha(ch) << endl; 
cout << "isdigit('5'): " << isdigit(ch) << endl; 
cout << "isupper('A'): " << isupper(ch) << endl;
cout << "islower('a'): " << islower('a') << endl; 
cout << "isalnum('A'): " << isalnum('A') << endl; 
cout << "isspace(' '): " << isspace(' ') << endl;

cout << "toupper('a'): " << toupper('a') << endl; 
return 0; }