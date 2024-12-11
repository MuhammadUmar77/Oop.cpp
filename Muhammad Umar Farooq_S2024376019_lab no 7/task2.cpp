#include <iostream>
using namespace std;

class Rectangle{
public:
    double length;
    double width;

    void display(){
        cout<<"Length: "<<length<<", Width: "<<width<<endl;
    }
};

void modify_shape(Rectangle& rect){
    rect.length = 10; 
    rect.width = 5;   
}

int main(){

    Rectangle rect1;
    rect1.length = 4; 
    rect1.width = 2; 

    
    cout<<"Before modification:"<<endl;
    rect1.display();

    modify_shape(rect1);

    cout<<"After modification:"<<endl;
    rect1.display();

    return 0;
}