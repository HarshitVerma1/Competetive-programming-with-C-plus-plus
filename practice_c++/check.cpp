#include <iostream>
using namespace std;
class My
{
private:
    int a = 56;

protected:
    int b = 46;

public:
    int c = 52;
};
class inherited : public My
{
public:
    void display()
    {
        // cout << "Value of 'b' is :" <<a ;  // This is showing error
        // cout << "Value of 'b' is :" << b << endl;
        // cout << "Value of 'c' is :" << c << endl;
        cout << "Value of 'a','b' & 'c' is :" << a << b << c << endl;
    }
};
int main(void)
{
    // inherited i;
    My i;
    // cout << "Value of 'a','b' & 'c' is :" << i.a << i.b << i.c << endl;
    return 0;
}
