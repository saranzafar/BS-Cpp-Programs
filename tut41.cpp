#include <iostream> //multiple inheritance
using namespace std;
// class derived : visibility - mode base1, visibility - mode base2
// {
//     class body;
// };
class base1
{
protected:
    int var1;

public:
    void get_base1(int a)
    {
        var1 = a;
    }
};
class base2
{
protected:
    int var2;

public:
    void get_base2(int b)
    {
        var2 = b;
    }
};
class base3
{
protected:
    int var3;

public:
    void get_base3(int c)
    {
        var3 = c;
    }
};
// base1 and base2 will be private in derived class
class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "the value of base1 is " << var1 << endl;
        cout << "the value of base2 is " << var2 << endl;
        cout << "the value of base3 is " << var3 << endl;
        cout << "the sum of base1, base2 & base3 is " << var1 + var2 + var3 << endl;
    }
};
int main()
{
    derived obj1;
    obj1.get_base1(25);
    obj1.get_base2(44);
    obj1.get_base3(88);
    obj1.show();
}