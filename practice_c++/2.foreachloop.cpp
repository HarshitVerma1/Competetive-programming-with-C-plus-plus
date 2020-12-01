#include <iostream>
using namespace std;
int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto &i : a)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}