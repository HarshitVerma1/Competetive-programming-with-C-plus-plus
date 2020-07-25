#include<iostream>
#include<cstring>   //for c++
// #include<string.h>  //for 'C'
using namespace std;
int main()
{
    char firstName[]="Harshit";
    char secondName[] = "Verma";
    cout << strlen(firstName)<<endl; ///-----> 7
    cout << strcat(firstName,secondName)<<endl; //----------> HarshitVerma
    cout << strncat(firstName, secondName,3) << endl;//---------> HarshitVermaVer
    cout << firstName << endl; //----------> HarshitVermaVer
}