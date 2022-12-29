#include <iostream>


using namespace std;

int main(){
    int num_list[] = {3, 2, -7, 19, -18};
    
    for (int i = 0; i<=4;++i){
        if (num_list[i]%2 != 0 && num_list[i] <= 14 && num_list[i] >= 5){
          cout<< num_list[i]<<"\n";  
        }
        
    }
    // system("pause");
    return 0;
}