#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    string rank;

public:
    Employee(const string& n, const string& p) : name(n), rank(p) {}

    void show() const {
        cout << "Name: " << name << ", Rank: " << rank << endl;
    }
};

class Company {
private:
    Employee mamber1;
    Employee mamber2;

public:
    Company(Employee e1, Employee e2) : mamber1(e1), mamber2(e2) {}

    void showData() const {
        cout << "Employees in the company: "<<endl;
        mamber1.show();
        mamber2.show();
    }
};

int main() {
    Employee emp1("Usman", "Manager");
    Employee emp2("Ali", "Developer");

    Company company(emp1, emp2);

    company.showData();

    return 0;
}