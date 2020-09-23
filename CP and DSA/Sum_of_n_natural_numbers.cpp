#include <iostream>
using namespace std;
int main(){
    int i, sum = 0,n;
    cout << "Enter nth integer for Sum : ";
    cin >> n;
    for ( i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout <<"1st Method : "<< sum<<endl;
    cout << "2nd Method : ";
    cout << n * (n + 1) / 2;
}