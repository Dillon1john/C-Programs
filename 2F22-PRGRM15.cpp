#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter number for A: ";
    cin>>a;

    cout<<"Enter number for B: ";
    cin>>b;

    cout<<"Enter number for C: ";
    cin>>c;

    int exp1 = a+b+c;

    int exp2 = a*b+c;

    int exp3 = a*(b+c);
    
    if (exp1>exp2){
        cout<<"GGG";
    }
    if (exp1<exp3){
        cout<<"None";
    }
    if (exp2==exp3){
        cout<<"a="<<a;
    }
    else{
        cout<<"b+c="<<b+c;
    }
    cout<<"Bye";
    return 0;

}