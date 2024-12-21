#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string model;
    string make;
    int year;
    double price;

public:
    Car(string v, string x, int y, double z) {
        make = v;
        model = x;
        year = y;
        price = z;
    }
    void display() {
        cout << year << " " << make << " " << model << " - $" << price << endl;
    }
};
class Dealership {
private:
    Car c1;
    Car c2;

public:
    Dealership(Car c1, Car c2) : c1(c1), c2(c2) {}

    void displayIndex() {
        cout << "Dealership Index: "<<endl;
        c1.display();
        c2.display();
    }
};
int main() {
    Car c1("Honda", "Rebirth", 2012, 32000);
    Car c2("Toyota", "MarkX", 2005, 30000);

    Dealership dealership(c1, c2);
    dealership.displayIndex();

    return 0;
}