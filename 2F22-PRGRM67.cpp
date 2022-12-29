#include <iostream>
using namespace std;

int main(){
    int i = 2;
    do{
       if (i%2 != 0){
            cout<<i<<"\n";
        }
        i+=1; 
    }
    while(i<=18);

    system("pause");
    return 0;
}