#include <iostream>
#include <list>

using namespace std;

int main(){

    int num_list[] = {3, 2, -7, 19, -18};
    int i = 0;
    do{
        cout<< num_list[i]<<"\n";
        i+=2;
    }
    while(i<=4);
    // system("pause");
    return 0;
}