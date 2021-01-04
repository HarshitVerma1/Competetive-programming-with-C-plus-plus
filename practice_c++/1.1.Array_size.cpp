#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[] = {12, 3, 4, 54, 66};
    int len = *(&arr + 1) - arr;
    cout << "(arr) is : " << arr << endl;
    cout << "(&arr[0]) is : " << &arr[0] << endl;
    cout << "(&arr +0) is :" << (&arr + 0) << endl;
    cout << "(arr+1) is : " << (arr + 1) << endl;
    cout << "(&arr[1]) is : " << &arr[1] << endl;
    cout << "Address of Last element : " << &arr[4] << endl; // So, in the array , 4(index)+1=5 five elements are present.
    cout << "Address of (Last+1)th element : " << &arr[5] << endl;
    cout << "(&arr+1) is :" << (&arr + 1) << endl;     // address of (Last+1)th  element
    cout << "(*(&arr+1)) is :" << *(&arr + 1) << endl; //* is not necessary
    // cout << "(*(&arr+1)) is :" << (&arr + 1) << endl;
    cout << "Array Lenth is : (*(&arr+1)-arr) : " << (*(&arr + 1) - arr) << endl;
    cout << "Array Lenth is : (*(&arr+1)-arr) : " << len << endl;
}
/*
(arr) is : 0x7ffeb9c4b3a0
(&arr[0]) is : 0x7ffeb9c4b3a0
(&arr +0) is :0x7ffeb9c4b3a0
(arr+1) is : 0x7ffeb9c4b3a4
(&arr[1]) is : 0x7ffeb9c4b3a4
Address of Last element : 0x7ffeb9c4b3b0
Address of (Last+1)th element : 0x7ffeb9c4b3b4
(&arr+1) is :0x7ffeb9c4b3b4
(*(&arr+1)) is :0x7ffeb9c4b3b4
Array Lenth is : (*(&arr+1)-arr) : 5
Array Lenth is : (*(&arr+1)-arr) : 5
*/
