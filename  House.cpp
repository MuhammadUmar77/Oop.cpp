#include <iostream>
#include <string>
using namespace std;
class Furniture {
public:
    string name;
    string type;
    Furniture(string n, string t) : name(n), type(t) {}

    void show() const {
        cout << name << " (" << type << ")" << endl;
    }
};
class Room {
public:
    string roomName;
    Furniture furniture1;
    Furniture furniture2;

    Room(string name, Furniture f1, Furniture f2) 
        : roomName(name), furniture1(f1), furniture2(f2) {}

    void showFurniture() const {
        cout << "Furniture in " << roomName << ": "<<endl;
        furniture1.show();
        furniture2.show();
    }
};
class House {
public:
    Room room1;
    Room room2;

    House(Room r1, Room r2) : room1(r1), room2(r2) {}

    void showHouse() const {
        cout << "House Furniture:"<<endl;
        room1.showFurniture();
        room2.showFurniture();
    }
};

int main() {
    Furniture furniture1("Sofa", "Living Room");
    Furniture furniture2("Table", "Living Room");
    Furniture furniture3("Bed", "Bedroom");
    Furniture furniture4("chair", "Bedroom");

    Room livingRoom("Living Room", furniture1, furniture2);
    Room bedroom("Bedroom", furniture3, furniture4);

    House house(livingRoom, bedroom);

    house.showHouse();

    return 0;
}