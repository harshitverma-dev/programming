// structures, Unions and Enums
#include <iostream>
using namespace std;

struct employee
{
    int eId;            // 4 bytes
    char firstNameChar; // 1 bytes
};
// 5 bytes memory will be assigned.

// using typedef (typedef is used to assign a new name);
// here we are assigning struct employee to eDetails;

// typedef struct employee
// {
//     int eId;
//     char firstNameChar;
// } eDetails ;

union userMarks
{
    int computerScience; // 4 bytes
    char favChar;        // 1 bytes
    int maths;           // 4 bytes
};
// 4 bytes will be assigned. (memory will be shared)

int main()
{
    // for structure
    // eDetails Harshit;
    // eDetails Shreya;
    struct employee Harshit;
    struct employee Shreya;
    Harshit.eId = 127839;
    Harshit.firstNameChar = 'H';
    Shreya.eId = 523454;
    Shreya.firstNameChar = 'S';
    cout << Harshit.eId << endl;
    cout << Harshit.firstNameChar << endl;
    cout << Shreya.eId << endl;
    cout << Shreya.firstNameChar << endl;

    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    cout << Meal[0]

    return 0;
}