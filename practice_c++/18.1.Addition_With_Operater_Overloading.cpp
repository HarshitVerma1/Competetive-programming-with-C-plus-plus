#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex(int real = 0, int img = 0)
    {
        this->real = real;
        this->img = img;
    }

    Complex operator+(Complex c2)
    {
        Complex temp;
        temp.img = img + c2.img;
        temp.real = real + c2.real;
        display(temp);
        return temp;
    }
    void display(Complex result)
    {
        cout << result.real << " + " << result.img << " i" << endl;
    }
};
int main()
{
    int m, n, o, p;
    cout << "Enter the img and real part of 1st Complex number repectively : " << endl;
    cin >> m >> n;
    cout << "Enter the img and real part of 2nd Complex number repectively : " << endl;
    cin >> o >> p;
    Complex c1(m, n), c2(o, p);
    Complex result;
    result = c1 + c2;
}