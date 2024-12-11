#include <iostream>
using namespace std;

class Base {
public:
    int publicVar = 10;     
protected:
    int protectedVar = 20;  
private:
    int privateVar = 30;    
};

class DerivedPublic : public Base {  
public:
    void show() {
        cout << "Public: " << publicVar << endl;       
        cout << "Protected: " << protectedVar << endl;
    
    }
};

class DerivedProtected : protected Base {  
public:
    void show() {
        cout << "Public becomes Protected: " << publicVar << endl; 
        cout << "Protected: " << protectedVar << endl;            
    }
};

class DerivedPrivate : private Base {  
public:
    void show() {
        cout << "Public becomes Private: " << publicVar << endl; 
        cout << "Protected becomes Private: " << protectedVar << endl; 
    }
};

int main() {
    DerivedPublic obj1;
    obj1.show();
    cout << "Accessing publicVar directly: " << obj1.publicVar << endl; 

    DerivedProtected obj2;

    DerivedPrivate obj3;

    return 0;
}
