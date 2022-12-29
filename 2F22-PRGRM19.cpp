#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter Number: ";
    cin>>a;
    switch (a)
    {
    case 3:
        cout<<"three\n";
        break;
    case 5: 
        cout<<"five\n";
        break;
    case 7:
        cout<<"seven\n";
        break;        
    
    default:
        cout<<"None\n";
        break;
    }
    return 0;
}