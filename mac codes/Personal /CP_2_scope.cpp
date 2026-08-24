#include <iostream>
using namespace std;
int globalVar= 100; 

int main (){
    int localVar= 50;
    
    if (true) {
        int blockVar= 30;

        cout << "Block Variable:  " <<blockVar << endl;


    }    

cout <<"global: " <<globalVar << endl;
cout <<"local: " <<localVar << endl;
return 0;

    
}