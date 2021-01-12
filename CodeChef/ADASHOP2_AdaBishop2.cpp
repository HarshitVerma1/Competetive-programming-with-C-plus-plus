#include <iostream>
using namespace std;
void printpath()
{
    cout << 1 << " " << 1 << "\n";
    cout << 8 << " " << 8 << "\n";
    cout << 7 << " " << 7 << "\n";
    cout << 6 << " " << 8 << "\n";
    cout << 1 << " " << 3 << "\n";
    cout << 3 << " " << 1 << "\n";
    cout << 8 << " " << 6 << "\n";
    cout << 7 << " " << 5 << "\n";
    cout << 8 << " " << 4 << "\n";
    cout << 5 << " " << 1 << "\n";
    cout << 1 << " " << 5 << "\n";
    cout << 4 << " " << 8 << "\n";
    cout << 3 << " " << 7 << "\n";
    cout << 2 << " " << 8 << "\n";
    cout << 1 << " " << 7 << "\n";
    cout << 7 << " " << 1 << "\n";
    cout << 8 << " " << 2 << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        if (r == 1 && c == 1)
        {
            cout << 17 << "\n";
            printpath();
        }
        else if (r == c)
        {
            cout << 18 << "\n";
            cout << r << " " << c << "\n";
            printpath();
        }
        else
        {
            cout << 19 << "\n";
            cout << r << " " << c << "\n";
            int d = (r + c) / 2;
            cout << d << " " << d << "\n";
            printpath();
        }
    }
    return 0;
}
