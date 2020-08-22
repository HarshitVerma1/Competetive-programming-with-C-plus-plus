#include<iostream>
using namespace std;
int find_size(int arr[])
{
    cout<< "Array as a parameter(pass as a Pointer) : " << sizeof(arr)<<endl;
}
int main()
{
    int arr[10];
    cout << "main array size : " << sizeof(arr)<<endl;
    find_size(arr);
}