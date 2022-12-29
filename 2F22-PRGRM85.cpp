#include <iostream>
#include <list>

using namespace std;

int main(){
    int count = 0;
    int num_list[] = {3, 2, -7, 19, -18};
    int i = 0;
    do{
        if (num_list[i] == -7){
            count+= 1;
        }
        ++i;
        }
        while(i<=4);
        
    cout<<"-7 count:"<<count<<"\n";

    // system("pause");
    return 0;
}