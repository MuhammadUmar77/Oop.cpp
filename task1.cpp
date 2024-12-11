#include <iostream>
using namespace std;

class book
{
private:
    int price, page;
    string name;

public:
        void get()
        {
            cout << "Enter Price = ";
            cin>>price;
            cout << "Enter Page_Number = ";
            cin>>page;
            cout << "Enter name = ";
            cin>>name;
        }
        void show()
        {
            cout << "Price = " << price << endl;
            cout << "Page Number = " << page << endl;
            cout << "Book name = " << name << endl;
        }
};

int main()
{
    book b1;
    b1.get();
    book b2(b1);
    book b3=b2;
    cout << "\n Detail of b1 " <<endl;
    b1.show();
    cout << "\n Detail of b1 " <<endl;
    b2.show();
    cout << "\n Detail of b1 " <<endl;
    b3.show();


    return 0;
}