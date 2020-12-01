#include <iostream>
using namespace std;
int main()
{
    // ======================================================================================================================================
    // //Adress Idea in Array
    // int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // cout << A << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << &A[i] << endl;
    // }
    //======================================================================================================================================

    //Array declare Pointer as dynamically
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = A; // 'p' pointer has the address of Array A[0].....Now we able to access array by 'p' as p[index].
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << "  ";
    }
    cout << endl;

    // Same thing Print by *p+1 or *p+2 or *p+3 or *p+4 or *p+5 ......etc
    for (int i = 0; i < 10; i++)
    {
        cout << *p + i << "  ";
    }
    cout << endl;
}