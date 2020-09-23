#include<iostream>
using namespace std;
int main()
{
    int n,a,b,sum=0;
    cout << "Enter a no. : ";
    cin >> n;
    b = n;
    while(n!=0)
    {
        a = n % 10;
        n = n / 10;
        sum = sum + a * a * a;
    }
    if (b==sum || (b>=0 && b<=9))
    {
        cout << endl
             << "Hey , This is a ARMSTRONG NUMBER !!!" << endl;
        return 0;
    }
    cout << "Oooooh !!! Not armstrong number....";
}