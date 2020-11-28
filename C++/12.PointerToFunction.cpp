#include <iostream>
using namespace std;
int areaOfRectangle(int x, int y)
{
    return x * y;
}
int main()
{
    int (*p)(int, int);
    p = areaOfRectangle;
    cout << (*p)(8, 9) << endl;
}