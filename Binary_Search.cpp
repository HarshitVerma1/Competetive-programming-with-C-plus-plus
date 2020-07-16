#include<iostream>
using namespace std;
int main()
{
    int low=0, high=9, mid,key;
    int A[10] = {6,8,13,17,20,22,25,28,30,35}; //this array must be sorted
    cout << "Enter KEY for finding : ";
    cin >> key;
    cout << endl;
    while(low<=high)
    {
        mid = (low + high) / 2;
        if (A[mid] == key)
        {
            cout << "Key found at index : " << mid;
            return 0;
        }
        else if (key<A[mid])
        {
            high = mid - 1;
            
        }
        else
        {
            low = mid + 1;
        }
    }
    cout <<"NOT FOUND" << endl;
}