#include<iostream>
using namespace std;
int main()
{
    int n, i,count=0;
    cout << "Enter a Integer : "<<endl;
    cin >> n;
    for ( i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        cout << "Prime Number"<<endl;
        return 0;
    }
    else
    {
        cout << "Not a Prime number"<<endl;
        return 0;
    }
    // cout << count;
}