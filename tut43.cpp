// ambiguity
// ambiguous
#include <iostream>
using namespace std;
class bas1
{
public:
    void greet()
    {
        cout << "How are you...1\n";
    }
};
class bas2
{
public:
    void greet()
    {
        cout << "How are you...2\n";
    }
};
class derived : public bas1, public bas2
{
public:
    void greet()
    {
        bas1::greet(); // ambiguity resolution
    }
};
class b
{
public:
    void say()
    {
        cout << "Hellow world b" << endl;
    }
};
class d : public b
{
public:
    // void say()//if we comment out this function compiler autometically run say() function from  class b.
    // {
    //     cout << "Hellow world d" << endl;
    // }
};
int main()
{ // Ambiguity 1
    /* bas1 obj1;
     bas2 obj2;
     obj1.greet();
     obj2.greet();
     derived obj3;
     obj3.greet();
     */
    // ambiguity 2
    b x;
    x.say();
    d y;
    y.say();

    return 0;
}