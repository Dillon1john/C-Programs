#include <iostream>
using namespace std;
// Print a sum of array with 4 rows an 3 columns 
int main(){
    int sum = 0;
    int array[5] = {0,1,2,3,4};
    for(int j = 0; j<3; j++){
       for (int i =0; i<5; i++){
        sum+=array[i];
        }
         
    }
    cout<<sum;
   
    return 0;
}