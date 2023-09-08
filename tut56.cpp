#include <iostream> //virtual function
using namespace std;
class base
{
public:
    int var1 = 1;
    //  void display()//pointer execute this function by default
    virtual void display() // now pointer execute display function of inherited class
    {
        cout << "Displaying base class variable: " << var1 << endl;
    }
};
class derived : public base
{
public:
    int var2 = 2;
    void display()
    {
        cout << "Displaying base class variable: " << var1 << endl;
        cout << "Displaying derived class variable: " << var2 << endl;
    }
};
int main()
{
    base *b_ptr;
    base b_obj;
    derived *d_ptr;
    derived d_obj;
    b_ptr = &d_obj;
    b_ptr->display();
    return 0;
}
