#include<stdio.h>
void main()
{
    // int a, b;
    // a = b = 4;
    // b = a++;
    // printf("%d", b);
    // printf("%d %d %d %d", a++, --b, ++a, b--);
    char i = 0;
    char a[10] = {'B', 'i', 'n', 'o', 'd'};
    while (i!="\0")
    {
        printf("%c\n", a[i]);
        i++;
    }
    
    printf("%s\n", a);
    printf("%d\n", a);
    printf("%u\n", a);
}