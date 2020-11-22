#include <iostream>
using namespace std;
int main()
{
    int size, max = INT64_MIN, index = 0;
    cout << "Enter the size of Array : ";
    cin >> size;
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter the %d value of Array : ", i + 1);
        cin >> p[i];
    }
    cout << "Entered Element is : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << p[i] << "   ";
    }
    for (int i = 0; i < size; i++)
    {
        if (max < p[i])
        {
            max = p[i];
            index = i;
        }
    }
    cout << endl
         << "Maximum Element is A[" << index << "] : " << p[index] << endl;
}