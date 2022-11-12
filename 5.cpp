// pointers
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *b = &a;  // here b is a pointer variable which holds the address of another variable.
    int **c = &b; // here c is a pointer variable which holds the address of another pointer variable.

    cout << "Address of variable a is " << &a << endl;    // it will print the address of a
    cout << "Address of variable a is " << *(&a) << endl; // it will print the value of a

    cout << "Address of variable a is " << b << endl;  // it will print the address of a
    cout << "Address of variable a is " << *b << endl; // it will print the value of a

    cout << c << endl; // it will give the address of b;
    return 0;
}
