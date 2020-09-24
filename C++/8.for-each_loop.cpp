#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int A[10] = {0, 1, 2, 52, 4, 5, 6, 7, 8, 9};
    float B[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    for (int i : A) // at here "i" is elements of array 'A' not index.
    {
        cout << i << " ";
    }
    printf("\n\n");
    for (int &x : A) // at here "& with 'x'" shows that values are permanently changed in Array by x+=4
    {
        x = x + 4;
    }
    for (int i : A) // at here "i" is elements of array, not index.
    {
        cout << i << " ";
    }
    printf("\n\n");
    for (auto x : B)
    {
        cout << x << " ";
    }
    printf("\n");
}