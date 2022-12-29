#include <iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter Number for A: ";
    cin>>a;
    cout<<"Enter Number for B: ";
    cin>>b;


    if (a==b){
        while(a==b){
            cout<<"Numbers must be unique ";
            cout<<"Enter Number for A again: ";
            cin>>a;
            cout<<"Enter Number for B again: ";
            cin>>b;



        }
    }
    else if (a>b)
    {
        cout<<"The greater value is "<<a;
        
    }
    else{
        cout<<"The greater value is "<<b;
    }
   return 0; 
}