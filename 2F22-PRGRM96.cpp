#include <iostream>
using namespace std;

void f(int &x, int y){
    x=99;
    y=99;
    }
    
int main(){
    int a = 22;
    int b = 33;
    cout<<"a"<<a<<"b"<<b<<endl;
    f(a,b);
    cout<<"a"<<a<<"b"<<b<<endl;
// System