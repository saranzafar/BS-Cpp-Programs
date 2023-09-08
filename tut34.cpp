#include <iostream> //copy constructor
using namespace std;
class number
{
private:
    int a;

public:
    number() { a = 0; };
    number(int num) { a = num; }
    // when no copy constructor is found, compiler supplies its own copy constructor
    number(number &obj)
    {
        cout << "Copy constructor called " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    number z1(); // copy constructor invoked
    z.display();
    z2 = z; // copy not constructor invoked
    z2.display();
    number z3 = z; // copy constructor invoked
    z3.display();
    return 0;
}
