#include <iostream> //creating a constructor
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex(void);
    void printnum(void)
    {
        cout << "your number is " << a << " + " << b << endl;
    }
};
complex::complex(void) // ----->>> this is a default constructor as it accept no parameters
{
    a = 10;
    b = 20;
    // cout << "Hello world..." << endl;
}

int main()
{
    complex c1, c2, c3;
    c1.printnum();
    c2.printnum();
    c3.printnum();
    return 0;
}
/*
Defination:-
"constructor is a special member functionwith thesame name of class"
a. it is used to initialize the object of its class.
b. it is automatically invoked(run,call) whenever an object is created.
--->>> characterstics of constructor
1. it should be declared in public section of class.
2. they are automatically invoked whenever object is created.
3. they cannot return value and do not have return type.
5. it can have default arguments.
6. we cannot refer to their adress.
*/
