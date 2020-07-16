#include<iostream>
using namespace std;
int main()
{
    long int n, key;
    cout<< "Enter the no. of values : ";
    cin >> n;
    int A[n];
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << "Enter the element of A[" << j << "] : ";
        cin >> A[j];
    }
    cout << endl<< "Enter the finding Key : ";
    cin >> key;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if ( key==A[i])
        {
            cout << "Found at index : " << i;
            return 0;
        }
    }

    cout << "'KEY' not founded!!!";
}