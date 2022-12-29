#include <iostream>


using namespace std;

int main(){
    int num_list[] = {3, 2, -7, 19, -18};
    int i = 0;
    while(i<=4){
        if (num_list[i] > 0){
          cout<< num_list[i]<<"\n";  
        }
        ++i;
        
    }

    // system("pause");
    return 0;
}