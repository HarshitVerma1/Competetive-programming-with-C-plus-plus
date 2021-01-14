#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int a)
    {
        length = a;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int parameter()
    {
        return (2 * (length + breadth));
    }
};
int main()
{
    int m, n, q, r;
    cout << "Enter the Length and Breadth for 1st Rectangle respectively : " << endl;
    cin >> m >> n;
    cout << "Enter the Length and Breadth for 2nd Rectangle respectively : " << endl;
    cin >> q >> r;
    Rectangle *p = new Rectangle();
    Rectangle x;
    x.setLength(m);
    x.setBreadth(n);
    p->setLength(q);
    p->setBreadth(r);
    cout << "Area of x object : " << x.area() << endl;
    cout << "Parameter of x object : " << x.parameter() << endl;
    cout << "Area of p ptr object : " << p->area() << endl;
    cout << "Parameter of p ptr object : " << p->parameter() << endl;
}