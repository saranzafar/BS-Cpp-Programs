#include <iostream>//constructor in derived class
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called: " << endl;
    }
    void print_data1()
    {
        cout << "The value of data1 is: " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called: " << endl;
    }
    void print_data2()
    {
        cout << "The value of data2 is: " << data2 << endl;
    }
};
class derived : public base1, public base2 // according to this order constructor called
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called: " << endl;
    }
    void print_data3(void)
    {
        cout << "The value of derived1 is: " << derived1 << endl;
        cout << "The value of derived2 is: " << derived2 << endl;
    }
};
int main()
{
    derived obj(11, 12, 13, 14);
    obj.print_data1();
    obj.print_data2();
    obj.print_data3();
    return 0;
}
/*
-------------- Order of execution of constructor --------------
Case 1:
Class B : public A
{
Order of execution of constructor --->> first A then B
};
Case 2:
Class A: public Class B, public A
{
Order of execution of constructor --->> first B then C and then A
};
Case 3:
Class A: public Class B,virtual public A
{
Order of execution of constructor --->> first A then B and then A
};
*/