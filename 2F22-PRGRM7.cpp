#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;

    cout<<"Enter number for A: ";
    cin>>a;

    cout<<"Enter number for B: ";
    cin>>b;

    cout<<"Enter number for C: ";
    cin>>c;

    cout<<"Enter number for D: ";
    cin>>d;

    int exp1 = a+(b-c)^c *d-d%c;

    cout<<"The value is "<<exp1;
    return 0;
}