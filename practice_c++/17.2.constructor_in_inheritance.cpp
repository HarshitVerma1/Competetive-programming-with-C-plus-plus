#include <iostream>
using namespace std;
class Person
{
public:
    Person(int x)
    {
        cout << "person called " << x << endl;
    }
};

class Dean : public Person
{
public:
    Dean(int x) : Person(x)
    {
        cout << "Dean called: " << x << endl;
    }
};

class Director : public Person
{
public:
    Director(int x) : Person(x)
    {
        cout << "Director called: " << x << endl;
    }
};

class Hod : public Person
{
public:
    Hod(int x) : Person(x)
    {
        cout << "Hod called: " << x << endl;
    }
};

class Faculty : public Person
{
public:
    Faculty(int x) : Person(x)
    {
        cout << "Faculty called: " << x << endl;
    }
};

class Student : public Dean, public Faculty, public Director, public Hod
{
public:
    Student(int x) : Dean(x), Hod(x), Director(x), Faculty(x)
    {
        cout << "Student called : " << x << endl;
    }
};

class Mess : public Student
{
public:
    Mess(int x) : Student(x)
    {
        cout << "Mess called: " << x << endl;
    }
};

int main()
{
    Mess m(34);
}