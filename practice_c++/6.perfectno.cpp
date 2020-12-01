#include<iostream>
using namespace std;
int n,sum=0,factorials[100],count=0;
int main()
{
    cout<<"Enter a no.:"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            sum+=i;
            ++count;
        }
        
    }
    cout<<"Sum of factorial is : "<<sum<<endl;
    if (sum==2*n)
    {
        cout<<"It is a PERFECT NO."<<endl;
    }
    if (count==2)
    {
        cout<<"It is a Prime no."<<endl;
    }
}
