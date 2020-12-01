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
    Rectangle *r1;
    cout << sizeof(r1) << endl;
}