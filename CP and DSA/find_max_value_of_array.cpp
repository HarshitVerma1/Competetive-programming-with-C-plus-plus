// At here , we will search the MAX element of Array by linear search concept
#include<iostream>
using namespace std;
int main()
{
    cout << "How many values you wants to be sorted??" << endl<< "Enter the no. of values : ";
    long int n,Max=INT16_MIN;
    int i;
    cin >> n;
    cout << endl;
    int A[n]; 
    for (int j = 0; j <n; j++)
    {
        cout << "Enter the element of A[" << j << "] : " ;
        cin >> A[j];
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        if (Max<A[i])
        {
            Max = A[i];
        }
        
    }
    cout << "Maximum Value is :" << Max;

}