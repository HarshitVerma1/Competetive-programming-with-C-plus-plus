#include <iostream>
using namespace std;
template <class T>
T maxi(T x, T y)
{
    return x > y ? x : y;
}
// template <class T>
// T mini(T m, T n)
// {
//     return m < n ? m : n;
// }
int main()
{
    double x, y;
    cin >> x;
    // cin.ignore();
    cin >> y;
    // cout << mini(x, y) << endl;
    cout << maxi(x, y) << endl;
}
