#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter Number for A: ";
    cin>>a;

    cout<<"Enter Number for B";
    cin>>b;

    if(a!=b){
        if(a>b){
            cout<<a;
        }
        else{
            cout<<b;
        }
    }
    else{
        cout<<"Equal";
    }
    return 0;
}