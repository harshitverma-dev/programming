#include <iostream>
#include<iomanip>
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

    // ************* Manipulators *************//
    // endl, setw
    // for endl
    int i = 2;
    int j = 48;
    int k = 345;
    cout << "the value of i is :" << i << endl;
    cout << "the value of j is :" << j << endl;
    cout << "the value of k is :" << k << endl;
    // for setw
    cout << "the value of i is :" << setw(3) << i << endl;
    cout << "the value of j is :" << setw(3) << j << endl;
    cout << "the value of k is :" << setw(3) << k << endl;
}