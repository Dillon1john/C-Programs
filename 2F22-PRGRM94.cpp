#include <iostream> 
#include <cmath>
using namespace std;

void all_sol(){
    cout<<"All solutions\n8";
}

void no_sol(){
    cout<<"No solution\n";
}

//-c/b
double one_sol(double c1, double b1){
    return -c1/b1;
}

//-b/2a
double dupl_sol(double a1, double b2){
    return -b2/2*a1;
}

//x1
double two_sol1(double a2, double b3, double d1){
        return (-b3 + sqrt(d1))/(2*a2);
}

//x2
double two_sol2(double a3, double b4, double d2){
        return (-b4 - sqrt(d2))/(2*a3);
}

int main(){
    int a,b,c;
    int x;

    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    cout<<"Enter C:";
    cin>>c;

    if(a==0){
        if (b==0){
            if(c==0)
                all_sol(); 
            else
                no_sol();
        }
        else{
            cout<<"Linear\n";
            cout<<"x="<<one_sol(c,b)<<endl;
        }
    }
    else{
        int d = b^2 - 4*a*c;
        if (d<0)
            no_sol();
        
        else{
            if (d==0){
                cout<<"Duplicate solutions\n";
                cout<<"x="<<dupl_sol(a,b);
            }
            else
                cout<<"x1="<<two_sol1(a,b,d)<<" x2="<< two_sol2(a,b,d)<<endl;  
        }
    }
    return 0;
}