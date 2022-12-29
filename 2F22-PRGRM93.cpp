#include <iostream> 
#include <cmath>
using namespace std;



void all_sol(){
    cout<<"All solutions";
}

void no_sol(){
    cout<<"No solution";
}

double one_sol(double a1, double b1){
    return -b1/a1;
}


int main(){
   int a,b;
    cout<<"Enter Number for A: ";
    cin>>a;

    cout<<"Enter Number for B: ";
    cin>>b;

    if (a==0){
        if (b==0){
            all_sol();
        }
        else{
            no_sol();
        }
    }
    else{
        cout<<"One solution";
        cout<<"x="<<one_sol(a,b);
    }
    return 0;
    }