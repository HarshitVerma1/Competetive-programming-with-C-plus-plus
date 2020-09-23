#include<iostream>
using namespace std;
typedef float Basic_Salary,Percentage_of_Allowances,Percentage_of_Deductions ;
int main()
{
    Basic_Salary BS;
    Percentage_of_Allowances POA;
    Percentage_of_Deductions POD;
    cout << "What is your 'BASIC SALARY'??"<<endl;
    cin >> BS;
    cout << "What is your 'Percentage Of Allowances'??" << endl;
    cin >> POA;
    cout << "What is your 'Percentage Of Deductions'??" << endl;
    cin >> POD;
    float Net_Salary = BS + (BS * POA)/100 - (BS * POD)/100;
    cout << "Your 'Net SALARY' will be : "<<Net_Salary;
}