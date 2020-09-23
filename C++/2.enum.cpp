#include <iostream>
using namespace std;
int main()
{
    int i, j;
    enum days
    {
        mon = 1,
        tue,
        wed,
        thurs,
        fri,
        sat,
        sun
    };
    for (i = mon; i <= sun; i++)
    {
        cout << i << endl;
        if (i == 3)
        {
            cout << "Hi! Harshit , How are you??" << endl;
        }
    }

    cin >> j;
    cout << endl;
    switch (j)
    {
    case mon:
        cout << "I am MONDAY !!" << endl;
        break;
    case tue:
        cout << "I am TUESDAY" << endl;
        break;
    case wed:
        cout << "I am WEDNESDAY" << endl;
        break;
    case thurs:
        cout << "I am THURSDAY" << endl;
        break;
    case fri:
        cout << "I am FRIDAY" << endl;
        break;
    case sat:
        cout << "I am SATURDAY" << endl;
        break;
    case sun:
        cout << "I am SUNDAY" << endl;
        break;
    default:
        cout << "I am ANOTHER WEEKEND" << endl;
        break;
    }
}