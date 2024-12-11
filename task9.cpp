#include <iostream>
using namespace std;

class MyClass {
public:
    int publicVar;        
protected:
    int protectedVar;     
private:
    int privateVar;       

public:
    void setValues(int p, int pr, int pv) {
        publicVar = p;
        protectedVar = pr;
        privateVar = pv;
    }
    void display() {
        cout << "Public: " << publicVar << ", Protected: " << protectedVar << ", Private: " << privateVar << endl;
    }
};

class DerivedClass : public MyClass {
public:
    void accessProtected() {
        protectedVar = 20;  
        
    }
};

int main() {
    MyClass obj;
    obj.publicVar = 10;   

    obj.setValues(10, 20, 30);
    obj.display();

    return 0;
}
