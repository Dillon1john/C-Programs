#include <iostream>
#include <cmath>
using namespace std;


void circl(double r, double &circ){
    circ = r*2*3.14;
    
}
void area1(double r, double &area){
    area = r*3.14;

}

int main(){
    double r, area, circ;

    cout<<"Enter radius:";
    cin>>r;
    circl(r,circ);
    area1(r,area);

    cout<<"area="<<area<<" circumfrence="<<circ<<endl;

}