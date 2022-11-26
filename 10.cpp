// Default arguments
#include <iostream>
using namespace std;

int value(int i, int j = 5)  // here j value is the default value , for addition of a and b, if we pass only a value then for b default value will be considered. 
{
    return i + j;
}

int main()
{
    int a = 50;
    int b = 20;
    cout << "the addition value of a and b :" << value(a) << endl;  // 55
    cout << "the addition value of a and b :" << value(a, b) << endl;  // 70
}