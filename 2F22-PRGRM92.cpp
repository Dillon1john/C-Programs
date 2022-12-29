#include <iostream> 

using namespace std; 


int sum(int a1,int b1 ){
    return a1+b1;
}

int product(int a2,int b2){
    return a2*b2;
}

int main(){
    int a,b;
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    cout<<"sum="<<sum(a,b);
    cout<<"product="<<product(a,b);
    return 0;


}