// object memory allocation & using array in class >>
#include <iostream>
using namespace std;

class Shop
{
    int itemId[50];
    int itemPrice[50];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter the Id of your item" << endl;
    cin >> itemId[counter];
    cout << "Enter the Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "item Id : " << itemId[i] << " item price : " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop obj1;
    obj1.initCounter();
    for (int j = 0; j < 10; j++)
    {
        obj1.setPrice();
    }
    obj1.displayPrice();
    return 0;
}
