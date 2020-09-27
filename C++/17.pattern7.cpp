#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; i >= j; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6
