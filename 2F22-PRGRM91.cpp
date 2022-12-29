#include <iostream> 

using namespace std; 


void sum(int a,int b ){
    
    int sum = a+b;
    cout<<"sum="<<sum<<"\n";
}

void product(int a,int b){
    int product = a*b;
    cout<<"product="<<sum<<"\n";
}

int main(){
    int a,b;
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    sum(a,b);
    product(a,b);
    return 0;


}