// initialization list or initialization Sector in constructor
#include <iostream>
using namespace std;
class test
{
    int a, b; // a initialize first thats why line no 13 gives gaarbage value

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(j + i)
    // test(int i, int j) : a(i), b(j *2)
    // test(int i, int j) : a(i), b(j + a)
    // test(int i, int j) : b(j), a(i + b)// b gives garbage value
    test(int i, int j) : a(i)
    {
        b = j;
        cout << "Constructor\n";
        cout << "value of a is: " << a << endl;
        cout << "value of a is: " << b << endl;
    }
};
int main()
{
    test obj(1, 2);
    return 0;
}
/*
Syntax for initialization list in constructor:
constructor(argument-list) : initializatin-sector
{
    argument + other code;
}
*/