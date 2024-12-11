#include<iostream>
using namespace std;
class Move{
    protected:
    int position;
    public:
    Move(){
        position++;
    }
    void forward(){
       position=0;
    }
    void show(){
        cout<<"Position= "<<position<<endl;
    }
};
   class Move2: public Move {
    public:
    void backward(){
        position--;
    }
   };
   int main(){
    Move2 m;
    m.show();
    m.forward();
    m.show();
    m.backward();
    m.show();
   }