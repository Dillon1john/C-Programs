#include <iostream>


using namespace std;

int main(){
    int sum = 0;
    int num_list[] = {3, 2, -7, 19, 18};
    
    for (int i = 0; i<=4;++i){
        sum += num_list[i];   
    }


    cout<< sum<<"\n";

    // system("pause");
    return 0;
}