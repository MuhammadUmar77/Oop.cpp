#include <iostream>
using namespace std;

class Shape
{
public:
    void getArea()
    {
    }
    void getPerimeter()
    {
    }
};
class Rectangle : public Shape
{
private:
    float lenght, width;

public:
    Rectangle(float l, float w)
    {

        lenght = l;
        width = w;
    }
 void getArea()
    {
        cout << "Area= " << (lenght * width) << endl;
    }
 void getPerimeter()
    {
        cout << "Perimeter= " << 2 * (lenght + width) << endl;
    }
};
int main()
{
    Rectangle rect(3.4, 5.5);
    rect.getArea();
    rect.getPerimeter();
}