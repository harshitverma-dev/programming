// oops basics >>
// If one member function is called inside the other member function of the same class it is called nesting of a member function.
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;           // class attributes (private)
    void chk_bin(void); // class method (private)

public:
    void read(void); // class method
    void ones_compliments(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter the binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrent binary formate." << endl;
            exit(0);
        }
        else
        {
            cout << "corrent" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliments(void)
{
    chk_bin();  // nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary r;
    r.read();
    // r.chk_bin();
    r.ones_compliments();
    r.display();
}