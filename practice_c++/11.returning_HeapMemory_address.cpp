#include <iostream>
using namespace std;
int *fun()
{
    int *p = new int[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> p[i];
    }
    return p;
}
int main()
{
    int *x = fun(); //returning address taken by "x"
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << x[i] << "  ";
    }
    cout << endl;
}