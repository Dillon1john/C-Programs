#include <iostream>
using namespace std;

int main(){
    int i = 19;
    while(i>=-5){
        if (i%2 != 0){
            cout<<i<<"\n";
        }
        i-=1;
    }

    system("pause");
    return 0;
}