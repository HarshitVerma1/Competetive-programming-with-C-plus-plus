#include<iostream>
using namespace std;
int main()
{
    int MID = 4;
    {
        for (int i = 0; i <= 8; i++)
        {
            cout << endl;
            for (int j = 0; j < ((MID - 1) < j && j <= (i + 8 / 2)); j++)
            {
                if (((MID - 1) < j && j <= (i + 8 / 2)))
                {
                    if (i == 0)
                    {
                        cout << "    *    ";
                    }

                    else if ((MID - 1) < i && i < (1 + 8 / 2))
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                else
                {
                    cout << " ";
                }
            }
        }
    }
}