#include <iostream>
using namespace std;

class A {
public:

    int sum;
   
  

    A(int x, int y)
    {
         sum= x+y;
    }
};

int main(){

    A a(10,20);
    cout <<a.sum;
    return 0;
}

