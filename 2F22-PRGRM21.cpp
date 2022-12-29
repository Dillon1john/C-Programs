#include <iostream>
using namespace std;

int main(){
    int score;
    cout<<"Enter Score: ";
    cin>>score;
    string grade;
    int scale = score/10;
    switch(scale){
        case 10:
            grade = "A";
            cout<<"Your grade is "<<grade<<"\n";
            break;
        case 9:
            grade = "A";
            cout<<"Your grade is "<<grade<<"\n";
            break;
        case 8:
            grade = "B";
            cout<<"Your grade is "<<grade<<"\n";
            break;
        case 7:
            grade = "C";
            cout<<"Your grade is "<<grade<<"\n";
            break;    
        case 6:
            grade = "D";
            cout<<"Your grade is "<<grade<<"\n";
            break;
        default:
            grade = "F";
            cout<<"Your grade is "<<grade<<"\n";
            break;    
    }
    return 0;
        
}