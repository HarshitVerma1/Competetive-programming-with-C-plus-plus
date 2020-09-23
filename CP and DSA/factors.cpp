#include<iostream>
using namespace std;
int main()
{
    int i, n, factor,sum=0;
    cout << "Enter a number for finding factors : ";
    cin >> n;
    cout << "Factotrs is :"<<endl;
    for (i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout << i ;
            sum += i;
            if (n == i)
            {
                break;
            }
            cout << " ,";
        }        
    }
    cout << endl<<"Sum of factors is :" << sum<<endl;
    if(sum==n*2)
    {
        cout << "Because factor's sum is equal to the twice to the sum of factors ; so, this is a 'PERFECT NUMBER'!!!"<<endl;
    }
}