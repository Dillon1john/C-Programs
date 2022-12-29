//Program 107 
#include <iostream>
using namespace std; 
int main()
{
int a, b;
int *pointer;//Pointer is created
pointer = &a;//Variable 'pointer' is assigned the location of 'a' 
*pointer = 50;//50 is equal to the value pointed to by 'pointer' 
pointer = &b;//Variable 'pointer' is assigned the location of 'b'
*pointer = 100; //100 is equal to the value point to by 'pointer'
cout << "a is " << a << '\n'; cout << "b is " << b << '\n'; system("pause");
return 0;

}

