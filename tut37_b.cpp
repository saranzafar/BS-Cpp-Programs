#include <iostream>
using namespace std;
class base
{
private:
    int data1; // private member and can't accessable in inheritance
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}
class derived : private base // access as privately
{
private:
    int data3;

public:
    void process();
    void display();
};
void derived::process()
{
    setdata();
    data3 = data2 * getdata1();
}
void derived::display()
{
    cout << "value of data1 is " << getdata1() << endl;
    cout << "value of data2 is " << data2 << endl;
    cout << "value of data1 is " << data3 << endl;
}
int main()
{
    derived der;
    // der.setdata();
    der.process();
    der.display();
    return 0;
}
