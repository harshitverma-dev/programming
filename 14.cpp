// oops concept in C++
#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c);
    void getData()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};

void Employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harshit;
    // harshit.a = 4;   // you will get an error because a is a private
    // harshit.b = 12;  // you will get an error because b is a private
    // harshit.c = 78;  // you will get an error because c is a private
    harshit.d = 34;
    harshit.e = 53;
    harshit.setData(2, 5, 8);
    harshit.getData();
    return 0;
}