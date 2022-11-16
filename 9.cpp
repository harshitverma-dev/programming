// call by value and call by reference
#include <iostream>
using namespace std;

// call by value (Actual and formal arguments will be created in different memory location)
// int change(int n, int m)
// {
//     n = 10;
//     m = 25;
// }
// int main()
// {
//     int a = 5;
//     int b = 10;
//     change(a, b);
//     cout << a << endl;
//     cout << b << endl;
//     return 0;
// }

// call by reference (Actual and formal arguments will be created in same memory location)
int change(int *n, int *m)
{
    *n = 30;
    *m = 25;
}
int main()
{
    int a = 5;
    int b = 10;
    cout << a << endl; // 5
    cout << b << endl;  // 10
    change(&a, &b); // here we are passing the address of a and b
    cout << a << endl; // 30
    cout << b << endl; // 25
    return 0;
}