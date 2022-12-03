// about oops >>   
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
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
    cout<<"Displaying your binary number"<<endl;
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