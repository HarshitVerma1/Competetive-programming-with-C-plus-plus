#include <iostream>
using namespace std;
int main()
{
    for (char i = 'A'; i < 'E'; i++)
    {
        for (char j = 'A'; j < 'E'; j++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
}