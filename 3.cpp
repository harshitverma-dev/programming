#include <iostream>
using namespace std;

int main()
{
    // ************ if-else, If-else ladder *************** //
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "you can not come to the party" << endl;
        cout << "because your age is below 18" << endl;
    }
    else if (age == 18)
    {
        cout << "ok, you can come to the party." << endl;
        cout << "your age is 18, so you will get a pass for attending the party" << endl;
    }
    else if ((age > 18) && (age <= 60))
    {
        cout << "you can come to the party and can injoy.";
    }
    else
    {
        cout << "you are old enough, you can not come" << endl;
        cout << "because your age is above 60" << endl;
    }

    // *************** switch statement ************** //
    int a;
    cout << "enter the age for switch case" << endl;
    cin >> a;
    switch (a)
    {
    case 18:
        cout << "your age is 18" << endl;
        break;
    case 22:
        cout << "your age is 22" << endl;
        break;
    case 28:
        cout << "your age is 28" << endl;
        break;
    default:
        cout << "not found" << endl;
        cout << "please enter 18 or 22 or 28" << endl;
        break;
    }

    return 0;
}