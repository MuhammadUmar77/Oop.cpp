#include <iostream>
using namespace std;

class Car{
    public: 
     
     string name;
     int model;
       
      Car(string n,int m){
        name=n;
        model=m;
      } 
    void display(){
         cout<<"Honda "<<name<<endl;
        cout<<"hybird "<<model<<"Model"<<endl;
       
    }
};
int main()
{
 Car x1("Reborn", 2006);
 Car x2("Rebirth", 2012);

 x1.display();
 x2.display();

}