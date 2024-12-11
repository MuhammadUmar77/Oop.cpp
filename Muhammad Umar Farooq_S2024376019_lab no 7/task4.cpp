#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double marks[3];

    Student(string n, double m1, double m2, double m3) {
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
};

double calculate_average_mark(Student student) {
    double total = 0;
    for (int i = 0; i < 3; i++) {
        total += student.marks[i];
    }
    return total / 3;
}

int main() {

    Student student1("Zain", 85, 90, 78);
    Student student2("Rabi", 72, 88, 95);

    cout<<"Average marks of "<<student1.name<<": "<<calculate_average_mark(student1)<<endl;
    cout<<"Average marks of "<<student2.name<<": "<<calculate_average_mark(student2)<<endl;

    return 0;
}