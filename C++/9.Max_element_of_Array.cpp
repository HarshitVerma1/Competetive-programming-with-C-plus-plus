#include <iostream>
using namespace std;
int main()
{
    int x, element, MAX = INT32_MIN, MIN = INT32_MAX;
    cout << "Enter here size of array : ";
    cin >> x;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        printf("Enter the element of A[%d] : ", i);
        cin >> element;
        A[i] = element;
    }
    printf("\nYour Entered element of Array is : ");
    for (int i = 0; i < x; i++)
    {
        cout << A[i];
        if (i < x - 1)
        {
            printf(", ");
        }
        if (i == x - 1)
        {
            printf(" ;");
        }
    }
    printf("\n");
    for (int i = 0; i < x; i++)
    {
        if (A[i] > MAX)
        {
            MAX = A[i];
        }
    }
    for (int i = 0; i < x; i++)
    {
        if (A[i] < MIN)
        {
            MIN = A[i];
        }
    }
    printf("MAXIMUM ELEMENT OF ARAY IS : %d", MAX);
    printf("\nMINIMUM ELEMENT OF ARAY IS : %d", MIN);
    printf("\n\n");
}