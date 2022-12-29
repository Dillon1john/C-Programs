#include <iostream>
using namespace std;

int main(){
    int fin_sum = 0;
    for (int i = 19; i<=21; i+=1){
        if (i%2 == 0){
           fin_sum+=i; 
        }
        }

    cout<<fin_sum<<"\n";

    system("pause");
    return 0;
}