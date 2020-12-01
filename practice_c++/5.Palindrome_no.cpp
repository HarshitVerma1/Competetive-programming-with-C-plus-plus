#include<iostream>
using namespace std;
int main()
{
    int n,rem,rev=0,temp;
    cout<<"Enter a no.:"<<endl;
    cin>>n;
    temp=n;
    while (temp!=0)
    {
        rem=temp%10;
        temp=temp/10;
        rev=rev*10+rem;
    }
    if (rev==n)
    {
        cout<<"It is a PALINDROME NUMBER"<<endl;
        return 0;
    }
    cout<<"It is not Palindrome no."<<endl;
}