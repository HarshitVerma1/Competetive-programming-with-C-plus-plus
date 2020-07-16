#include<iostream>
using namespace std;
int main()
{
    int array1[] = {7, 5, 62, 1, 3, 8, 45, 12, 25};
    for (auto x :array1 )
    {
        cout << ++x<<" ";
    }
    cout << endl;
    for (auto y : array1)
    {
        cout << y << " ";
    }
    
//==========================================================================================================================
    
    cout << endl;
    for (auto &z : array1)   // "&z"<---- reference will change to the value of real/ORIGINAL Array
    {
        cout << ++z << " ";
    }

    cout << endl;
    for (auto m : array1)  // at here, we will print the changed values of array 
    {
        cout << m << " ";  
    }
}