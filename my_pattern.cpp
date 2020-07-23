#include<iostream>
using namespace std;
int main() 
{
    int MID = 4;
    for (int i = 0; i <= 8; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 9 || i == 11 || i == 13 || i == 15 || i == 17 || i == 19 || i == 21 || i == 23 || i == 25 || i == 27 || i == 29)
        {
            continue;
        }
        else
        {
           for (i = 0; i <=8; i++)
           {
               cout << endl;
               for (int j = 0; j <= 8; j++)
               {
                   if (((MID - 1) < j && j <= (i + 8 / 2)))
                   {     if (i==0&&j==0)
                        {
                            cout << "    *    ";
                            continue;
                        }
                        
                        else if ((MID-1)<i&&i<(1+8/2))
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
}