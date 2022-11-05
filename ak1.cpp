#include <iostream>
using namespace std;

int pattern()
{
    int n, m;
    cout << "Enter the number of rows" << endl;  // << here we are using insertion operator.
    cin >> n; // >> here we are using extraction operator.
    cout << "Enter the number of colums" << endl;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "**";
        }
        cout << endl;
    }
    return 0; 
}
int main()
{
    int a = 10;
    int b= 5;
    float c = 5.7;
    char d = 'H';
    // pattern();
    // cout << "the mod of a and b is :"<< a % b << endl;
    cout << "size of a\t" << sizeof(a) << endl;
    cout << "size of b\t" << sizeof(b) << endl; 
    cout << "size of c\t" << sizeof(c) << endl; 
    cout << "size of d\t" << sizeof(d) << endl; 


    return 0;
}