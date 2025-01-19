#include <iostream>
using namespace std;
class Person 
{
public:
    string name;
    int age;
    void showData() 
	{
        cout<<"Name : " <<name<<endl;
        cout<<"Age : " <<age<<endl;
    }
};
class Teacher :  public Person 
{  
public:
	string t;
    void teacher() 
	{
        cout<<name<< " is teaching"<<endl;
    }
};
class Student :  public Person 
{  
public:
	string s;
    void study() 
	{
        cout<<name<< " is studying"<<endl;
    }
};
class Monitor : public Teacher, public Student {
public:
    void manageClassroom() 
	{
	cout<<t<< " managing the classroom "<<endl;	
    }
    void markAttendance() 
	{
	cout<<s<< " Mark the attandance "<<endl;	
    }
};
int main()
 {
   Teacher x1;
   x1.name="sultan";
   x1.age=20;
   x1.showData();
   Monitor y1;
   y1.t="Ahamd";
   y1.s="Raafay";
   y1.manageClassroom();
   y1.markAttendance();     
    return 0;
}

