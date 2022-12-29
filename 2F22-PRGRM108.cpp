//Program 108
#include<iostream>
using namespace std;

int main(){
    int x = 0;
    int num=0;
    cout << "Dereference\tThe Pointer\tThe X Value"<< endl; while (x < 9){
    int *p = &num;
    cout << *p << "\t\t" << p << "\t" << num << endl;
    x++;
    num++;
    }
    system("pause");
    return 0;
}