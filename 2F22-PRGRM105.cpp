#include <iostream>
using namespace std;
// Print a table with 4 rows an 3 columns 
int main(){
    int array[5] = {0,1,2,3,4};
    for(int j = 0; j<3; j++){
       for (int i =0; i<5; i++){
           if (i == 0){
               cout<<" "<<array[i];
           }
        
        }
        cout<<endl;  
    }
   
    return 0;
}