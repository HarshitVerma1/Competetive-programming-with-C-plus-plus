#include <iostream>
using namespace std;
class Car
{
private:
    string a = "Car Started";

public:
    virtual void display() = 0;
    // {
    //     cout << a << endl;
    // }
};

class Innova : public Car
{
private:
    string b = "Innnova started";

public:
    void display()
    {
        cout << b << endl;
    }
};
class Wagonar : public Car
{
private:
    string c = "Wagonr Started";

public:
    void display()
    {
        cout << c << endl;
    }
};
class swift : public Car
{
private:
    string c = "Swift Started";

public:
    void display()
    {
        cout << c << endl;
    }
};

int main()
{
    Car *C;
    C = new Innova();
    C->display();
    C = new swift();
    C->display();
    C = new Wagonar();
    C->display();
}
