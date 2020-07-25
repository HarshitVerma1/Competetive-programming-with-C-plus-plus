#include<iostream>
#include<cstring>   //for c++
// #include<string.h>  //for 'C'
using namespace std;
int main()
{
    char firstName[]="Harshit";
    char secondName[] = "Verma";
    char Hobby[50];
    char main[]="programming";
    char subString[] = "gram";
    char subString2[] = "Radhe";
    char x ={'r'} ;

    // cout << strstr(main, subString2); //--------> this shows an RunTimeError because 'Radhe' string is nat matched in "programming". so we will use the "if-else" block to solve this problem
    if (strstr(main,subString2)!=NULL)
    {
        cout <<"MATCHED" << endl;
    }
    else
    {
        cout << "NOT FOUND !!!" << endl;
    }
//======================================================================================================================================================================
    cout << strlen(firstName)<<endl; ///-----> 7
    cout << strcat(firstName,secondName)<<endl; //----------> HarshitVerma
    cout << strncat(firstName, secondName,3) << endl;//---------> HarshitVermaVer
    cout << firstName << endl; //----------> HarshitVermaVer
    cout << strcpy(Hobby,"Cricket")<<endl;  //----------> Cricket
    cout << strncpy(Hobby, "Badminton",3) << endl; //----------> Badcket (At here, only 3 character changed from begin)
    cout << Hobby << endl; //--------> Badcket
    cout << strstr(main, subString) << endl; //------>> gramming
    cout << strrchr(main, x);//------------> 
}