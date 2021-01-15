#include <iostream>
using namespace std;
class RationalNumber
{
private:
    int p, q;

public:
    RationalNumber(int p = 0, int q = 0)
    {
        this->p = p;
        this->q = q;
    }
    RationalNumber Add(RationalNumber R2)
    {
        RationalNumber temp;
        temp.p = p * (R2.q) + q * (R2.p);
        temp.q = q * (R2.q);
        display(temp);
        return temp;
    }
    void display(RationalNumber R1)
    {
        cout << "Addition is : " << R1.p << "/" << R1.q << endl;
    }
};
int main()
{
    int m, n, o, p;
    cout << "Enter the p and q part of 1st Rational number repectively : " << endl;
    cin >> m >> n;
    cout << "Enter the p and q part of 2nd Rational number repectively : " << endl;
    cin >> o >> p;
    RationalNumber r1(m, n), r2(o, p), result;
    result = r1.Add(r2);
}