#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter Number for A: ";
    cin>>a;

    cout<<"Enter Number for B:";
    cin>>b;

    if (a>b){
        cout<<a<<" is larger value";
    }
    else if(a<b){
        cout<<b<<" is larger value";
    }
    else{
        cout<<"Equal";
    }
    return 0;
}