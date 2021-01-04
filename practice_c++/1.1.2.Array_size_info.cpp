#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 5}; //last index is 4.
    cout << "(&A)" << (&A) << endl;
    cout << "(A+1)" << (A + 1) << endl;
    cout << "(&A[1])" << (&A[1]) << endl;
    cout << "(&A+1)" << (&A + 1) << endl; //address of A[5]
    cout << "(&A[5])" << (&A[5]) << endl;
    cout << "(&A+2)" << (&A + 2) << endl;
    cout << "(&A+3)" << (&A + 3) << endl;
}