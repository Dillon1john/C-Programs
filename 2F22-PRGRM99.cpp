#include <iostream>
#include <cmath>
using namespace std;


void circle(double r, double &area, double &circ){
    area = r*3.14
    circ = r*2*3.14;
}

int main(){
    double r, area, circ;

    cout<<"Enter radius:";
    cin>>r;
    circle(r,area,circ);
    cout<<"area="<<area<<" circumfrence="<<circ<<endl;

}