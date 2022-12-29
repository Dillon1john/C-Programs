#include <iostream>
#include <list>

using namespace std;

int main(){
    int count = 0;
    int num_list[] = {3, 2, -7, 19, -18};
    int i = 0;
    while(i<=4){
        if (num_list[i] == -7){
            count+= 1;
        }
        ++i;

    }
    cout<<"-7 count:"<<count<<"\n";

    // system("pause");
    return 0;
}