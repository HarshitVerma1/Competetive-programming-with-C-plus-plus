#include <stdio.h>
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    float B[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int x[5] = {1, 2};
    for (int i = 0; i < 5; i++)
    {
        printf("\nElement of A[%d] is : %d", i, A[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nElement of B[%d] is : %.2f", i, B[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nElement of x[%d] is : %d", i, x[i]);
    }
    printf("\n\n");
}