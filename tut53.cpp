#include <iostream> //this pointer in c++
using namespace std;
class A
{
    int a;

public:
    // void setdata(int a)
    A &setdata(int a)
    {
        this->a = a;  // this point to an object and also can return value
        return *this; // this is a keyword which is a pointer &which point to an object which invokes member function.
    }
    void displaydata()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A a;
    a.setdata(4).displaydata();
    // a.displaydata();
    return 0;
}