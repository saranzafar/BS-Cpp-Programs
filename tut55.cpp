#include <iostream> //Pointers to derived class
using namespace std;
class base
{
public:
    int var1;
    void display()
    {
        cout << "Displaying base class variable: " << var1 << endl;
    }
};
class derived : public base
{
public:
    int var2;
    void display()
    {
        cout << "Displaying base class variable: " << var1 << endl;
        cout << "Displaying derived class variable: " << var2 << endl;
    }
};
int main()
{
    base obj1;
    base *b_ptr;
    derived obj2;
    derived *d_ptr;
    b_ptr = &obj2;
    b_ptr->var1 = 34;
    b_ptr->display();
    b_ptr->var1 = 200;
    b_ptr->display();
    // No matter which value stored in "Base-class pointer" it can run only access members of its own class.
    // b_ptr-> var2; it can't access members of derived class
    d_ptr = &obj2;
    d_ptr->var1 = 300;
    d_ptr->var2 = 400;
    d_ptr->display();
    return 0;
}
