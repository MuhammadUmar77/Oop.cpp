#include<iostream>
using namespace std;

class Distance
{
private:
   int km;
public:
  void input(){
    cout<<"Enter your traveling distance in 1 hours: "<<endl;
    cin>>km;
  }
  void output(){
    cout<<"Yor traveling "<<km<<" in 1 hours."<<endl;
  }
  void add (Distance x){
    Distance y;
    y.km = km + x.km;
    cout<<"Totall distance to discover is "<<y.km<<endl;

  }
};
int main (){
    Distance first, second;
    first.input();
    first.output();
    second.input();
    second.output();
    first.add(second);
    
}
