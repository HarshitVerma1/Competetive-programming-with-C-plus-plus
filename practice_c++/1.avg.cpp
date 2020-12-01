#include <iostream>
using namespace std;
int main()
{
    float a[20], avg = 0, sum = 0;
    int n;
    cout << "how many numbers do you want to average??" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        printf("Enter %d no. ", i + 1);
        cin >> a[i];
        sum += a[i];
    }

    avg = sum / n;
    cout << endl
         << "AVERAGE :" << avg << endl;
}