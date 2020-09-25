#include <iostream>
using namespace std;
int main()
{
    for (char i = 'E'; i >= 'A'; i--)
    {
        for (char j = 'E'; j >= 'A'; j--)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}