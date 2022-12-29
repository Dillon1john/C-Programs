#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter number for A: ";
    cin >> a;

    cout<<"Enter number for B: ";
    cin >> b;

    cout<<"Enter number for C: ";
    cin >> c;
    
    int sum = a+b+c;
    int product = a*b*c;
    cout<<"The sum is: "<<sum<<"\n"<<"The product is: "<<product<<"\n";

    return 0;
}