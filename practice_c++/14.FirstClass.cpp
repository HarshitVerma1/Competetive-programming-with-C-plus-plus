#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return breadth * length;
    }
    int parameters()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r1, r2;
    r1.length = 10;
    r1.breadth = 15;
    r2.length = 7;
    r2.breadth = 8;
    cout << endl
         << "Area of r1 rectangle is : " << r1.area() << endl;
    cout << "Parameter Of r2 rectangle is : " << r1.parameters() << endl;
    cout << "Area of r1 rectangle is : " << r2.area() << endl;
    cout << "Parameter Of r2 rectangle is : " << r2.parameters() << endl;
}