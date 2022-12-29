#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    int x;

    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    cout<<"Enter C";
    cin>>c;

    if(a==0){
        if (b==0){
            if(c==0){
                cout<<"All solutions";
            }
            else{
                cout<<"No solution";
            }
        }
        else{
            cout<<"Linear";
            x = -c/b;
            cout<<"x="<<x;
        }
    }
    else{
        int d = b^2 - 4*a*c;
        if (d<0){
            cout<<"No solutions";
        }
        else{
            if (d==0){
                cout<<"Duplicate solutions";
                x = -b/2*a;
                cout<<"x="<<x;
            }
            else{
                int x1 = (-b + sqrt(d))/(2*a);
                int x2 = (-b - sqrt(d))/(2*a);
                cout<<"x1="<<x1<<" x2="<< x2; 
            }
        }
    }
    return 0;
}