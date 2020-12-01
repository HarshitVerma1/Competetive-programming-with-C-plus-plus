// if you want to use the Encapsulation ( or Data_Hidding)
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int i)
    {
        length = i;
    }
    void setBreadth(int i)
    {
        breadth = i;
    }
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
    r1.setBreadth(10);
    r1.setLength(12);

    r2.setBreadth(9);
    r2.setLength(8);
    cout << endl
         << "Area of r1 rectangle is : " << r1.area() << endl;
    cout << "Parameter Of r2 rectangle is : " << r1.parameters() << endl;
    cout << "Area of r1 rectangle is : " << r2.area() << endl;
    cout << "Parameter Of r2 rectangle is : " << r2.parameters() << endl;
}