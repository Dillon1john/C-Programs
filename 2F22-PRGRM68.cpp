#include <iostream>
using namespace std;

int main(){
    int i = 1;
    do{
       if (i%2 == 0){
            cout<<i<<"\n";
        }
        i+=1; 
    }
    while(i<=19);

    system("pause");
    return 0;
}