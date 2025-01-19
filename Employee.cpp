#include<iostream>
using namespace std;

class Employee{
    public:
    int salary;
};
class Student{
    public:
    int id;
};
class Assistant:public Employee, public Student{
    public:
    int age;

    Assistant(int s, int i, int a){
        salary=s;
        id=i;
        age=a;
    }
    void show(){
        cout<<"Salary= "<<salary<<endl;
        cout<<"Id= "<<id<<endl;
        cout<<"Age= "<<age<<endl;
        
    }
};
int main(){
    Assistant assist(25000 , 2024376, 21);
    assist.show();
}