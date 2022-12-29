#include <iostream> 

using namespace std; 




void sum(){
    int a,b;
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    int sum = a+b;
    cout<<"sum="<<sum<<"\n";
}

void product(){
    int a,b;
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    int product = a*b;
    cout<<"product="<<product<<"\n";
}
int main(){

    sum();
    product();
    return 0;


}