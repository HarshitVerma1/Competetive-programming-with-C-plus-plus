#include<iostream>
using namespace std;
int main()
{
    int i = 11;
    int *p = &i;
    int **p2 = &p;
    cout << "Address of 'p' and 'p2' will  be Continous : " << &p << "\t" << &p2 << endl;
    cout << "Value of 'p' and '*p2' will be address of 'i' : " << p << "\t" << *p2 << endl;
    cout << "Adress of 'i' is : " << &i << endl;
    cout << "Value of 'i' is : " << i << "\t" << *p << "\t" << **p2 << endl;

    /// at here if we want to change the value of "i"
    (*p)++;
    (**p2)++;
    // cout << "changed value of i will be : " << i << endl;
    cout << "Changed Value of 'i' is : " << i << "\t" << *p << "\t" << **p2 << endl;
}