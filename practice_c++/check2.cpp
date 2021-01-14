#include <iostream>
using namespace std;
static int x = 0;
class person
{
public:
    person(int x)
    {
        cout << "person::person(int x) called " << endl;
    }
};

class Student : public person
{
public:
    Student(int x) : person(x)
    {
        cout << "Student::Student called" << endl;
    }
};

class Faculty : public person
{
public:
    Faculty(int x) : person(x)
    {
        cout << "Faculty::Faculty(int x) called" << endl;
    }
};

class TA : public Student, public Faculty
{
public:
    TA(int x) : Faculty(x), Student(x)
    {
        cout << "TA::TA(int x) Called" << endl;
    }
};

int main()
{
    TA a(25);
}
