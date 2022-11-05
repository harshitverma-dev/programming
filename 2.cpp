#include <iostream>
using namespace std;

int main()
{
    // ************** Reference variables **************  //
    int a = 53;
    int &b = a; // here b is a reference variable
    cout << a << endl;
    cout << b << endl;


    // ************* Typecasting ************* //
    int x = 56;
    float y = 78.89;
    cout << int(y) << endl;
    cout << float(x) << endl;
}