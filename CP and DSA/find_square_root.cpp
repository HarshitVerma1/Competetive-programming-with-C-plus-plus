#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,r1,r2;
    cout<<"Enter value of a, b & c of the quadratic equation respectively: ";
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/2*a;
    r2=(-b-sqrt(b*b-4*a*c))/2*a;
    cout<<"Root of your quadratic equation is : "<<r1<<" & "<<r2;
}
