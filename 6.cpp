// array pointers
#include <iostream>
using namespace std;

int main()
{
    string subject[] = {"computer", "maths", "programming"};
    string *p = subject; // here p is pointer variable which is holding the subject array. so we can get the value and address using p, such as..
    // p , p+1, p+2  these will give the address.
    // *p , *(p+1), *(p+2) these will give the value of the address.
    cout << p << endl;
    cout << p + 1 << endl;
    cout << p + 2 << endl;
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;

    int arr[] = {10, 20, 30, 40, 50};
    cout << arr[0] << endl; // it will give the zero index value.
    cout << arr[1] << endl; // it will give the 1st index value.
    cout << arr[2] << endl; // it will give the 2nd index value.
    cout << arr[3] << endl; // it will give the 3rd index value.
    cout << arr[4] << endl; // it will give the 4th index value.

    //  accessing the value via pointer concept.
    // here arr points the 1st address of the array.
    cout << arr << endl;     // it will give the address of zero index value.
    cout << arr + 1 << endl; // it will give the address of 1st index value.
    cout << arr + 2 << endl; // it will give the address of 2nd index value.
    cout << arr + 3 << endl; // it will give the address of 3rd index value.
    cout << arr + 4 << endl; // it will give the address of 4th index value.

    // here we are accessing the value of different addresses.
    cout << *(arr) << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;
    cout << *(arr + 4) << endl;

    return 0;
}
