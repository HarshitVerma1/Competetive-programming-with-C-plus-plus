#include<iostream>
using namespace std;
int factorial(int s)
{
    if (s==0)
    {
        return 1;
    }
    
    return s * factorial(s - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << factorial(n)<<endl;
    cout << sizeof(int)<<" Bytes"<<endl;
    cout <<"capacity of integer will be:"<< INT32_MAX;
}
