#include <iostream>
using namespace std;

int main() {
  int x = 50;
  int y = 25;

  if (x > 10) {
    cout << "x is greater than 10" <<endl;

    if (y > 20) {
      cout << "y is also greater than 20" <<endl;
    }
  }

  else {
    cout << "blehhh!!" <<endl;
  }

  return 0;
}
