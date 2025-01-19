#include<iostream>
using namespace std;

class Vehicle{
	public:
		void start(){
			cout<<"Car Start"<<endl;
		}
		
		void stop(){
			cout<<"Car Stop"<<endl;
		}
};

class Car: public Vehicle{
	public:
		void car(){
			cout<<"Simple car"<<endl;
		}
};

class SportsCar: public Vehicle{
	public:
		void sportscar(){
			cout<<"Sports Car"<<endl;
		}
};

int main(){
	Car x1;
	SportsCar x2;
	x1.car();
	x1.start();
	x1.stop();
	
	x2.sportscar();
	x2.start();
	x2.stop();
}

