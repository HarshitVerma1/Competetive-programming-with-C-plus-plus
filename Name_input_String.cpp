#include<iostream>
using namespace std;
int main()
{
    char h,s[100];
    // cout << "Enter your Name : ";
    // cin >> h;
    // cout << "'h' is : " << h<<endl<<"Enter Your Name : ";
    // cin.ignore();
//=======================================================================================================
    // cin >> s;
    // cout << "'s' is : "<<s<<endl;
//=======================================================================================================
    // cin.get(s, 100);
    // cout << "Entered Name is : "<<s;
//=======================================================================================================
    // char name[50];
    // cin.get(s, 100);
    // cout << "'s' is : "<<s<<endl;
    // cin.ignore(); //<------ IMPORTANT , if you want to use of "get()" two time in a function :)
    // cin.get(name, 100);
    // cout << "'name' is : "<<name;
    // cout << endl
    //      << "ALL DONE!!!!";
//=======================================================================================================
    char name[50];
    cin.getline(s, 100);
    cout << "'s' is : "<<s<<endl;
    // cin.ignore(); //<------ IMPORTANT , if you want to use of "get()" two time in a function :)
    cin.getline(name, 100);
    cout << "'name' is : "<<name;
    cout << endl
         << "ALL DONE!!!!";
}