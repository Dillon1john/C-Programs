#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int num_list [] = {5,7,2,9,6,8,3,1,4};

    //Function 1 sort
    
    cout<< "\nBefore sort:\n";
    for (int i = 0; i<=8;++i){
        
        cout<< num_list[i]<<"      ";
        }

    sort(num_list, num_list+9);
    cout<< "\nAfter sort:\n";
    for (int i = 0; i<=8;++i){
        cout<< num_list[i]<<"      ";
        }

    //Function 2 sqrt()
    cout<<"\n\nsqaare root:\n"<<sqrt(9)<<"\n";

    //Function 3 round based on how high or low round()
    cout<<"\n\nround number 55.5: "<<round(55.5)<<"\n";

     //Function 4 round down floor()
    cout<<"\n\nround number 32.6 down: "<<floor(32.6)<<"\n";

    //Function 5 round up ceil()
    cout<<"\n\nround number 32.6 up: "<<ceil(32.6)<<"\n";

    //Function 6 max()
    int num_list2 [] = {15,19,81,89,78,22,56,899};
    cout<<"\n\nreturn max between from numlist2: "<<max(num_list2[0],num_list2[7])<<"\n";

    //Function 7 squares int pow()
    cout<<"\n\nreturns 5 to the power of 4:  "<<pow(5.0,4.0)<<"\n";

    // Function 8 absolute value abs()
    cout<<"\n\nreturns absolute value of -8:  "<<abs(-8)<<"\n";

    //Function 9 min()
    cout<<"\n\nreturn max between from numlist2: "<<min(num_list2[0],num_list2[7])<<"\n";

}