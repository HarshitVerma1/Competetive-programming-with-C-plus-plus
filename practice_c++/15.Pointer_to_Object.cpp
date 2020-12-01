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
    Rectangle r1, *p;
    p = &r1;
    r1.length = 10;
    p->breadth = 20;
    cout << r1.area() << endl;
    cout << r1.parameters() << endl;
}