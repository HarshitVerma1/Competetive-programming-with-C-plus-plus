#include <iostream>
using namespace std;
int &fun(int &x)
{
    cout << &x << endl;
    return x;
}
int main()
{
    int a = 10;
    cout << &a << " : " << a << endl;
    fun(a) = 25;
    cout << a << endl; //at here, a=25 because fun(a) behave like LVALUE and x/a=25.
    cout << fun(a) << endl;
}