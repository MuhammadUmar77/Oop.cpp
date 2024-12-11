#include <iostream>
using namespace std;

class Car {
private:
    string name;
    int model;

public:
    
    Car(string n) : name(n), model(0) {}
     
    Car(int m) : name("other Car"), model(m) {}

    void display() {
        cout << "Car: " << name << ", Model: " << model << endl;
    }
};

int main() {
    Car x1("Reborn" );      
    x1.display(); 
    Car x2(2006);               
    x2.display();                

    return 0;
}
