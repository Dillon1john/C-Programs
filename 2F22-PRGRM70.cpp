#include <iostream>
using namespace std;

int main(){
    int fin_sum = 0;
    int i = 19;
    do{
        fin_sum+=i;
        i+=1;
    }
    while(i<=31);

    cout<<fin_sum;

    system("pause");
    return 0;
}