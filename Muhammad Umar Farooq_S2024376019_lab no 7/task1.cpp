#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;
};

double calculate_area(Rectangle rect) {
    return rect.length * rect.width;
}

int main() {
   
    Rectangle rect1;
    rect1.length = 5; 
    rect1.width = 3; 

    double area = calculate_area(rect1);

    cout<<"The area of the rectangle is: "<<area<<endl;

    return 0;
}