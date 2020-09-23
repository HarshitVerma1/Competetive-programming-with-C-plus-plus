#include <iostream>
using namespace std;
int len, wid;
struct Rectangle
{
    int length;
    int width;
};
int area()
{
    struct Rectangle r = {len, wid};
    struct Rectangle *p = &r;
    // return r.length * r.width;
    // return (*p).length * (*p).width;
    return p->length * p->width;
}
int parameter()
{
    struct Rectangle r = {len, wid};
    struct Rectangle *p = &r;
    // return 2 * (r.length + r.width);
    // return 2*((*p).length + (*p).width);
    return 2*(p->length + p->width);
}
int main()
{
    cout << "Enter length of a rectangle : ";
    cin >> len;
    cout << endl
         << "Enter width of a reectangle : ";
    cin >> wid;
    
    cout << endl
         << area() << endl;
    cout << parameter();
}