#include <iostream>


using namespace std;

int main(){
    int sum = 0;
    int num_list[] = {3, 2, -7, 19, 18};
    int i = 0;
    do{
        sum += num_list[i];   
        ++i;
    }
    while(i<=4);


    cout<< sum<<"\n";

    // system("pause");
    return 0;
}