#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter number for X: ";
    cin>>x;

    cout<<"Enter number for Y: ";
    cin>>y;

    int sum = x+y;

    int prod = x*y;

    if(x>y){
        cout<<"sum="<<sum;
    }
    if (x<y){
        cout<<"prod="<<prod;
    }

    if (x==y){
        cout<<"x="<<x<<"y="<<y;
    }

    int G = sum+prod;
    int M = sum*prod;

    if (G==M){
        cout<<"x="<<x<<"\n";
    }
    else{
        cout<<"Wow"<<"\n";
    }
    cout<<"Goodbye"<<"\n";
    return 0;
}