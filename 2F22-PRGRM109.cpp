//Program 109 
#include <iostream> 
using namespace std; 
int main()
{
    int data[5]; int * p;
    p = data; *p = 10; p++;
    *p = 20;
    p = &data[2];
    *p = 30;
    p = data + 3;
    *p = 40;
    p = data;
    *(p + 4) = 50;
    for (int n = 0; n<5; n++)
        cout << data[n] << ", "; 
    system("pause");
    return 0;
 }