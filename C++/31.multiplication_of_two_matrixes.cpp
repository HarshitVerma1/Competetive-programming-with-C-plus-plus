#include <iostream>
using namespace std;
int main()
{
    int m, n, x, y, sum;
    cout << "\nEnter The size of Matrix A by Rows and Columns respectively : ";
    cout << "\nEnter no. of Rows : ";
    cin >> m;
    cout << "\nEnter no. of columns : ";
    cin >> n;
    cout << "\nEnter The size of Matrix B by Rows and Columns respectively : ";
    cout << "\nEnter no. of Rows : ";
    cin >> x;
    cout << "\nEnter no. of columns : ";
    cin >> y;
    int a[m][n];
    int b[x][y];
    int c[m][y];
    cout << endl;
    if (n == x)
    {
        cout << endl;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << endl;
                printf("Enter the Element of Array A[%d][%d] :", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        cout << endl;
        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= y; j++)
            {
                cout << endl;
                printf("Enter the Element of Array B[%d][%d] :", i, j);
                cin >> b[i][j];
            }
        }
        cout << endl;
        cout << "Your Enterd Matrix A is :\n";
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << a[i][j] << "  ";
            }
            cout << endl;
        }
        cout << "\nYour Entered Matrix B is :\n";
        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= y; j++)
            {
                cout << b[i][j] << "  ";
            }
            cout << endl;
        }

        // now we will done addtion of matrix :
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= y; j++)
            {
                sum = 0;
                for (int k = 1; k <= n; k++) // we can take k<=x because n==x
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }
        cout << "\nMultiplication of both matrix is :\n";
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= y; j++)
            {
                cout << c[i][j] << "  ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << endl
             << "Multiplications of these matrix are not valid !! " << endl;
    }
}