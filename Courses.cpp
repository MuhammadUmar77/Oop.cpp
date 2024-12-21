#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int id;

    Student(string n, int a) : name(n), id(a) {}

    void show() const {
        cout << name << " (Id: " << id << ")" << endl;
    }
};

class Course {
public:
    string courseName;
    Student x;
    Student y;

    Course(string name, Student s1, Student s2) 
        : courseName(name), x(s1), y(s2) {}

    void showStudentsData()  {
        cout << "Students in " << courseName << ": "<<endl;
        x.show();
        y.show();
    }
};

int main() {
    Student student1("Hammad", 2637);
    Student student2("Zeeshan", 2837);
    Course course1("Oop lab", student1, student2);

    course1.showStudentsData();

    return 0;
}