#include <iostream>
using namespace std;
int main()
{
    typedef int High, Low;
    int n, mid, key;
    cout << "Enter size of Array : " << endl;
    cin >> n;
    int a[n];
    cout << "Enter Elements of Array for Binary search(by Key) : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    High h = sizeof(a) / sizeof(a[0]);
    Low l = 0;
    cout << "Enter Key for searching" << endl;
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == key)
        {
            cout << "index is :" << mid << endl;
            return 0;
        }
        else if (a[mid] < key)
            l = mid + 1;
        else
            h = mid - 1;
    }
}