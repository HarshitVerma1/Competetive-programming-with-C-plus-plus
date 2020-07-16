#include<iostream>
using namespace std;
int main()
{
    long int a,digit,n, i=1, reverse_no=0;
    cout << "Enter a Integer : " ;
    cin >> n;
    digit = n;
    do
    {
        a = digit % 10;
        reverse_no =reverse_no*10+ a;
        digit/= 10;

    } while (digit != 0);
    cout << "Reverse no. is : " << reverse_no << endl;
    if (n == reverse_no)
    {
        cout << "Entered no. is a 'PALINDROME NUMBER'" << endl;
        return 0;
    }
    cout << "Entered no. is NOT a palindrom no."; //at here "else" statement is not necessary because i used "return 0" in if statement ...and this is also a last statement.
}