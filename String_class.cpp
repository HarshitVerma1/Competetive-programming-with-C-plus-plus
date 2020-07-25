#include<iostream>
// #include<cstring>
using namespace std;
int main()
{
    string s = "Harshit Verma";
    cout << s << endl;
    cout << "Length is : " << s.length() << endl;
    cout << "Size is : " << s.size() << endl;
    cout << "Capacity is :" << s.capacity() << endl;
    s.resize(50);
    cout<< "Changed size is :"<<s.size() <<endl;
    cout << "New Capacity : " << s.capacity() << endl;
    cout << "Maximum size of string 's' :" << s.max_size() << endl;
    // s.clear();
    // s.erase(); //------> became size of string will = 0
    cout <<s.size()<< endl;

}