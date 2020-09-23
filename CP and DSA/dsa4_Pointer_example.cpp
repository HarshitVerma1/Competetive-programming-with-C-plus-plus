#include<iostream>
using namespace std;
int main()
{
    int a=5,*p;
    p = &a;
    int b[10] = {1,2,3,4,5,6,7,8,9,10}, *pb;
    pb = b;
    //for integer value
    cout << "'a' is :" << a << "\t" <<*p<< endl;
    cout << "address of 'a' is : " << &a << "\t" << p << endl;
    *p = 10; // both will be changed
    cout << *p << "\t" <<a ;
    //for integer array and integer pointers
    cout << "array b[] is :" << a << "\t" << endl;
    cout << "address of array b[] is : " <<b<<"\t"<< &b << "\t" << &b[0] << "\t" << pb << endl;
    cout << "address of array b[4] is : "<< & b[4]<<"\t"<<pb+4 << endl;
    
//=============================================================================================================================================================================================================================================================================================================================================================================================================================================
//                      For Char array :)    
//=============================================================================================================================================================================================================================================================================================================================================================================================================================================
    char c='H', *pc;
    pc = &c;
    char d[] = "abc", *pd;
    pd = d;
    cout << "Value of Char 'c' is : " << c << "\t" << *pc<<endl; //if we prints only 'c' then this char value not prints the address like 'single integer value' or 'Array'
    cout << "Address of char 'c' is : " << &c << "\t" << pc;     //at here 'pc' will print 'H' with 'Buffer'
    //for array
    cout << "Value of Char 'c' is : " << d << "\t" << *pd << endl; 
    cout << "Address of char 'c' is : " << &d << "\t" << pd<<endl;// at here 'pd' will print 'abc'
    cout << "a[4] is : " <<b[4]<<"\t"<<*(b+4) ;
}