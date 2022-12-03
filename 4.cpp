#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // ********* loops in c++ ********* //
    // ********** for loop, while loop , do-while loop ********** //
    // ******** for loop ******** //
    for (int i = 0; i <= 20; i++)
    {
        cout << i << endl;
    }
    // o/p ---> 0 to 20

    // ************ while loop *********** //
    int j = 0;
    while (j <= 5)
    {
        cout << j << endl;
        j++;
    }
    // o/p ---> 0
    //          1
    //          2
    //          3
    //          4
    //          5

    // ************* do while loop ***************** //
    int k = 50;
    do
    {
        cout << k << endl;
        k++;
    } while (k <= 55);
    // o/p ---> 50
    //          51
    //          52
    //          53
    //          54
    //          55

    // problem >> print the table
    int table;
    cin >> table;
    for (int i = 0; i <= 10; i++)
    {
        cout << table << '*' << i << "=" << table * i << endl;
    }

    float hv = 23.44;
    cout << setprecision(9) << hv << endl;

    return 0;
}