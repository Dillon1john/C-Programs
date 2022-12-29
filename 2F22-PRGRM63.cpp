#include <iostream>
#include <list>

using namespace std;

int main(){
    bool exists = false;
    int num_list[] = {3, 2, -7, 19, -18};
    
    for (int i = 0; i<=4;++i){
        if (num_list[i] == -7){
            exists = true;
            break;
        }
    }
    
    if (exists == true){
        cout<<"Yes -7 exists"<<"\n";
    }
    else{
        cout<<"No -7 does not exist"<<"\n";
    }
    // system("pause");
    return 0;
}