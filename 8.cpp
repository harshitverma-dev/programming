// functions and function Prototypes
#include <iostream>
using namespace std;

// function Prototypes (The function prototypes are used to tell the compiler about the number of arguments and about the required datatypes of a function parameter, it also tells about the return type of the function. )
int add(int n, int m);
int sub(int n, int m);
int mul(int n, int m);
int division(int n, int m);

int main()
{
    int a, b;
    cout << "Enter the value of a :" << endl;
    cin >> a;
    cout << "Enter the value of b :" << endl;
    cin >> b;
    cout << add(a, b) << endl;
    cout << sub(a, b) << endl;
    cout << mul(a, b) << endl;
    cout << division(a, b) << endl;
}
// for addition
int add(int n, int m)
{
    return n + m;
}

// for subtraction
int sub(int n, int m)
{
    return n - m;
}

// for multiplication
int mul(int n, int m)
{
    return n * m;
}

// for division
int division(int n, int m)
{
    return n / m;
}