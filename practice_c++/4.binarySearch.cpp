#include <iostream>
using namespace std;
int main()
{
    int A[10] = {1, 2, 3, 4, 5, 8, 23, 343, 656, 767};
    int low = 0, high = 9, mid, key;
    cout << "Enter a key : ";
    cin >> key;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == A[mid])
        {
            cout << mid << endl;
            return mid;
        }
        if (key < A[mid])
        {
            high = mid - 1;
        }
        if (key > A[mid])
        {
            low = mid + 1;
        }
    }
    cout << "Not Found" << endl;
}