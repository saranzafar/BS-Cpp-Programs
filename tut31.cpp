#include <iostream> //constructor overloading
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex(int x, int y) // parameterised constructor
    {
        a = x;
        b = y;
    }
    complex(int x) // parameterised constructor
    {
        a = x;
        b = 0;
    }
    complex(void) // default constructor
    {
        a = 0;
        b = 0;
    }
    void printnum(void)
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1(12, 13);
    complex c2(12);
    complex c3;

    c1.printnum();
    c2.printnum();
    c3.printnum();
    return 0;
}
/*
constructor overloading:-
we can make different constructors with same name and different argument compiler can
choose constructor according to their different argument.
*/
