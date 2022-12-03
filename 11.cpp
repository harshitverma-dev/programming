// Recursions and Recursive functions
// with example >>
#include <iostream>
using namespace std;

int fact(int n);
int fibo(int m);

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * fact(n - 1); //recursive call
}

int fibo(int m)
{
    if (m == 0 || m == 1)
    {
        return m;
    }

    return fibo(m - 1) + fibo(m - 2);
}

int main()
{
    int n, m;
    cout << "Please enter the number to get the factorial:" << endl;
    cin >> n;
    cout << "the factorial of " << n << " is: " << fact(n) << endl;

    cout << "Please enter the number to get the fibonacci series:" << endl;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cout << fibo(i)<<" ";
    }
    return 0;
}