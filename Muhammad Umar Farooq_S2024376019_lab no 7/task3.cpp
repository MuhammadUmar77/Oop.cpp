#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:

    Rectangle(double l, double w) : length(l), width(w) {}

    friend void modify_shape(Rectangle& rect);

    void display() {
        cout<<"Length: "<<length<<", Width: "<<width<<endl;
    }
};

void modify_shape(Rectangle& rect) {
    rect.length = 8; 
    rect.width = 4; 
}

int main() {
    Rectangle rect1(5, 3);

    cout<<"Before modification:"<<endl;
    rect1.display();

    modify_shape(rect1);

    cout<<"After modification:"<<endl;
    rect1.display();

    return 0;
}