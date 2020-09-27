#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "\nEnter The size of Matrice by Rows and Columns respectively : ";
    cout << "\nEnter no. of Rows : ";
    cin >> m;
    cout << "\nEnter no. of columns : ";
    cin >> n;
    int a[m][n];
    int b[m][n];
    int c[m][n];
    cout << endl;
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("\nEnter the Element of Array A[%d][%d] :", i, j);
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("\nEnter the Element of Array B[%d][%d] :", i, j);
            cin >> b[i][j];
        }
    }

    cout << endl
         << "Your Enterd Matrix A is :\n";
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "\nYour Enterd Matrix B is :\n";
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << b[i][j] << "  ";
        }
        cout << endl;
    }
    // now we will done addtion of matrix
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "\nAddition of both matrix is :\n";
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << c[i][j] << "  ";
        }
        cout << endl;
    }
}