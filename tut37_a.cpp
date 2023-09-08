#include <iostream>
using namespace std;

class employee // base class
{
private:
public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34;
    }
    employee(){};
};

//       ******* Derived class *******
class programmer : public employee
// class programmer : employee //Default visibility ode is private
{
public:
    int language_code;
    programmer(int inpid)
    {
        id = inpid;
        language_code = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    employee obj1(1), obj2(2);
    cout << obj1.salary << endl;
    cout << obj1.id << endl;
    cout << obj2.salary << endl;
    programmer skillF(10);
    cout << skillF.language_code << endl;
    cout << skillF.id << endl;//we can't access "id" if we use "private" visibility mode.
    skillF.getdata();
    return 0;
}
/*
--->> These bracitcs means we replace it
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class member/methods/etc...
}
--->> "visibility-mode" means How will you inharit your class.
--->> you can inherit your class as public
(Base class Public members become derived class public members & we can't access private members)
or as private(Base class Public members become derived class Privte members)
--->> Default visibility mode is private
--->> private members are never inherit if it not mentioned
*/