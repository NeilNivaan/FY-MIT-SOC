#include <iostream>
using namespace std;    

class Rectangle {
    private:
    float length;
    float breadth;

    public:
    void setDimensions (float l, float b) {
        length = l;
        breadth = b;
    }

    float calculateArea();
    float calculatePerimeter();
    void display();

};

float Rectangle::calculateArea() {
    return length * breadth;
}

float Rectangle::calculatePerimeter() {
    return 2 * (length + breadth);
}

void Rectangle::display() {
    cout << "Length: " << length << endl;
    cout << "Breadth: " << breadth << endl;
    cout << "Area: " << calculateArea() << endl;
    cout << "Perimeter: " << calculatePerimeter() << endl;
}

int main() {

    Rectangle rect;
    float length, breadth;

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth; 
    rect.setDimensions(length, breadth);
    rect.display();

    return 0;

}