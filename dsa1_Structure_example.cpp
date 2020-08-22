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
    return r.length * r.width;
}
int parameter()
{
    struct Rectangle r = {len, wid};
    return 2 * (r.length + r.width);
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