//Program 110 
#include <iostream> 
#include <new>
using namespace std; 

int main()
{
    int x, y;
    int *p;
    cout << "What is the size of the list? "; 
    cin >> x;
    p = new int[x];
    for (y = 0; y < x; y++)
    {
        cout << "Enter number: "; cin >> p[y];
    }
    cout << "List: ";
    for (y = 0; y < x; y++)
        cout << p[y] << ", "; 
    delete[]p;
    system("pause");
    return 0; 
}