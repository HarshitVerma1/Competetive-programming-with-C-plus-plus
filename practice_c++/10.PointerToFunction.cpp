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



// #include <iostream>
// #include <cmath>
// using namespace std;
// int Max(int x, int y)
// {
//     cout << "Max number is:" << (x > y ? x : y) << endl;
//     return (x > y ? x : y);
// }
// int Min(int x, int y)
// {
//     cout << "Minimum number is:" << (x < y ? x : y) << endl;
//     return x < y ? x : y;
// }
// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int (*fp)(int, int);
//     fp = Max;
//     (*fp)(m, n);
//     // cout << (*fp)(m, n) << endl;
//     // cout << Max(m, n) << endl;
//     fp = Min;
//     (*fp)(m, n); // returns only the value of minimum
// }
