#include <iostream>
#include <array>

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
    // First Method for find of Array's size
    len = *(&arr + 1) - arr;
    cout << "Array Lenth is : (*(&arr+1)-arr) : " << len << endl;
    // Second Method for find of Array's size
    len = sizeof(arr) / sizeof(arr[0]);
    cout << "Array Lenth is : sizeof(arr) / sizeof(arr[0]) : " << len << endl;
    // Third Method for find of Array's size
    int count = 0;
    for (int x : arr)
    {
        count++;
    }
    len = count;
    cout << "Array Lenth is : By ForEach Loop) : " << len << endl;
    //// fourth Method for find of Array's size by using begin() and end()
    len = end(arr) - begin(arr);
    cout << "Array Lenth is : By using begin() and end() : " << len << endl;
    //// Fivth Method for find of Array's size by using STL library arr.size()
    array<int, 5> array_2{1, 2, 3, 4, 5}; // declaration of array as STL is must.
    len = array_2.size();
    cout << "Array Lenth is : By using STL library arr.size() : " << len << endl;
}
/*
(arr) is : 0x7ffed90a5390
(&arr[0]) is : 0x7ffed90a5390
(&arr +0) is :0x7ffed90a5390
(arr+1) is : 0x7ffed90a5394
(&arr[1]) is : 0x7ffed90a5394
Address of Last element : 0x7ffed90a53a0
Address of (Last+1)th element : 0x7ffed90a53a4
(&arr+1) is :0x7ffed90a53a4
(*(&arr+1)) is :0x7ffed90a53a4
Array Lenth is : (*(&arr+1)-arr) : 5
Array Lenth is : (*(&arr+1)-arr) : 5
Array Lenth is : sizeof(arr) / sizeof(arr[0]) : 5
Array Lenth is : By ForEach Loop) : 5
Array Lenth is : By using begin() and end() : 5
Array Lenth is : By using STL library arr.size() : 5
*/
