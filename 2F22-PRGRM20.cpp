#include <iostream>
using namespace std;

int main(){
    int score;
    string grade;
    cout<<"Enter score: ";
    cin>>score;
    if (score >= 90 && score <= 100){
        grade = "A";
        cout<<"Your grade is "<<grade<<"\n";
    }
    else if(score >= 80 && score <= 90){
        grade = "B";
        cout<<"Your grade is "<<grade<<"\n";
    }
    else if(score >=70 && score <= 80){
        grade = "C";
        cout<<"Your grade is "<<grade<<"\n";
    }
    else if(score >= 60 && score <= 70){
        grade = "D";
        cout<<"Your grade is "<<grade<<"\n";
    }
    else{
        grade = "F";
        cout<<"Your grade is "<<grade<<"\n";
    }
    return 0;
}