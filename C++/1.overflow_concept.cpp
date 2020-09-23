#include<iostream>
using namespace std;
int main()
{
    char a=128,b=127,c=-128,d=-129,e=INT8_MAX,f=INT8_MIN;
    cout<<"MIN VALUE :"<<(int)a <<endl; // -128
    cout<<"MAX VALUE :"<<(int)b <<endl; // +127
    cout<<"MIN VALUE :"<<(int)c <<endl; // -128
    cout<<"MAX VALUE :"<<(int)d <<endl; // +127
    cout<<"INT8_MAX Value :"<<(int)e <<endl; // +127
    cout<<"INT8_MIN Value :"<<(int)f <<endl; // -128

}