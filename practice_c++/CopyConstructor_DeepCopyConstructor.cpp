#include <iostream>
using namespace std;
class CopyConstructor_DeepCopyConstructor
{
public:
    int a, *p;
    CopyConstructor_DeepCopyConstructor(int x) // it is a Constructor
    {
        a = x;
        p = new int[a];
    }
    CopyConstructor_DeepCopyConstructor(CopyConstructor_DeepCopyConstructor &t1) // it is a DeepCopyConstructor
    {
        a = t1.a;
        // p = t1.p;  //shallow copy ----> just point to the created array , it is not take the new memory.
        p = new int[a]; //Deep Copy ----> it creates new memory for this array.
    }
};

int main()
{
    CopyConstructor_DeepCopyConstructor t1(5);
    CopyConstructor_DeepCopyConstructor t2(t1);
}