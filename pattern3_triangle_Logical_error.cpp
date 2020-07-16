#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j >= i)
            {
                cout << " *"; // at here , if i want to give a space then it becomes necessary that "a extra space" be given in the else part. Otherwise this code prints the shape of triangle.
            }
            else
            {
                cout << " "; // at there, if i DON'T give the "a extra space" then this code/program prints the TRIANGLE Shape.
            }
        }
        cout << endl;
    }
}