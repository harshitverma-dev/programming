// factorial and Fibonnaci Series program without using recursion:

#include <iostream>
using namespace std;

int main()
{
    int n, m, fact = 1, a = 0, b = 1, fibo_sum = 0;
    cout << "enter the number to find the factorial:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact << endl;

    cout << "enter the number to find fibonnaci series:" << endl;
    cin >> m;
    for (int j = 0; j < m; j++)
    {
        fibo_sum = a + b;
        cout << fibo_sum << " ";
        a = b;
        b = fibo_sum;
    }
    return 0;
}
