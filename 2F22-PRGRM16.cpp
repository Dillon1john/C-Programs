#include <iostream>
using namespace std;
//Flowchart 16
int main(){
    int a,b;
    cout<<"Enter Number for A: ";
    cin>>a;

    cout<<"Enter Number for B: ";
    cin>>b;

    if (a==0){
        if (b==0){
            cout<<"All solutions";
        }
        else{
            cout<<"No solutions";
        }
    }
    else{
        cout<<"One solution";
        int x = -b/a;
        cout<<"x="<<x;
    }
    return 0;
}