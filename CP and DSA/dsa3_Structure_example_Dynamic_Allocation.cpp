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
    struct Rectangle *p;
    p = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    p->length = len;
    p->width = wid;
    // return r.length * r.width;
    // return (*p).length * (*p).width;
    return p->length * p->width;
}
int parameter()
{
    struct Rectangle *p;
    p = (Rectangle*)malloc(sizeof(Rectangle));
    p->length = len;
    p->width = wid;
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