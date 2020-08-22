#include<stdio.h>
int main()
{
    int a, b;
    a = b = 4;
    b = a++;
    printf("%d", b);
    printf("%d %d %d %d", a++, --b, ++a, b--);
}