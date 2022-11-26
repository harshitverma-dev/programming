// function overloading >>

#include <iostream>
using namespace std;

int addition(int a, int b);        // Function declaration with 2 parameters
int addition(int a, int b, int c); // Function declaration with 3 parameters
// two different fun's have the same name.
int addition(int a, int b)
{
    return a + b;
}
int addition(int a, int b, int c)
{
    return a + b + c;
}

// example >>
// valume of cube:
int valume(int a){
    return (a*a*a);
}
// valume of cylinder:
float valume(int r, int h){
    return (3.14*(r*r)*h);
}
// valume of rectagular
int valume(int l, int b, int h){
    return l*b*h;
}

int main()
{
    int a = 2, b=3, c=3;
    cout << addition(a, b) << endl;    // a,b are the arguments
    cout << addition(a, b, c) << endl; // a,b,c are the arguments

    cout<< valume(2)<<endl;
    cout<< valume(2, 5)<<endl;
    cout<< valume(2,4,6)<<endl;
    return 0;
}