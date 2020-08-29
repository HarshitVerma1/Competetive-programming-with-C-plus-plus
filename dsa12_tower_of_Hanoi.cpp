#include<iostream>
using namespace std;
int count = 0;
void TOH(int n, char a ,char b,char c )
{
    if(n>0)
    {
        TOH(n - 1, a, c, b);
        count++;
        cout << "Disk Moves : " << a << "---->" << c<<endl;
        TOH(n - 1, b, a, c);
    }
    
}
int main()
{
    char a = 'A', b = 'B', c = 'C';
    int n;
    cin >> n;
    TOH(n,a,b,c);
    cout << "Counts of BEST MOVES : " << count;
}