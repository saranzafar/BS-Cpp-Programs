#include <iostream>
#include <math.h>
using namespace std;
int var[5];
class simple_cal
{
public:
    void same(float &x, float &y)
    {
        cout << "Enter 1st numuber: " << endl;
        cin >> x;
        cout << "Enter 2nd numuber: " << endl;
        cin >> y;
    }
    void sum()
    {
        float a1, b1;
        same(a1, b1);
        cout << "sum = " << (a1 + b1) << endl
             << endl;
    }
    void multiplication()
    {
        float a1, b1;
        same(a1, b1);
        cout << "Multiplication = " << (a1 * b1) << endl
             << endl;
    }
    void division()
    {
        float a1, b1;
        same(a1, b1);
        cout << "Division = " << (a1 / b1) << endl
             << endl;
    }
    void subtraction()
    {
        float a1, b1;
        same(a1, b1);
        cout << "Subtraction = " << (a1 - b1) << endl
             << endl;
    }
};
class scientific_cal
{
public:
    void same1(float &s)
    {
        cout << "Enter numuber: " << endl;
        cin >> s;
    }
    void SQUARE_RT()
    {
        float a1;
        same1(a1);
        cout << "square root is " << sqrt(a1);
    }
    void SIN()
    {
        float a1;
        same1(a1);
        cout << "sin(" << a1 << ") = " << sin(a1) << endl;
    }
    void COS()
    {
        float a1;
        same1(a1);
        cout << "cos(" << a1 << ") = " << cos(a1) << endl;
    }
    void TAN()
    {
        float a1;
        same1(a1);
        cout << "tan(" << a1 << ") = " << tan(a1) << endl;
    }
    void POWER()
    {
        float a1, b1;
        cout << "Enter number: ";
        cin >> a1;
        cout << "Now enter its power: ";
        cin >> b1;
        cout << "Ans = " << pow(a1, b1);
    }
    void LOG()
    {
        float a1;
        same1(a1);
        cout << "log = " << log(a1) << endl;
    }
};
class multiple_inheritance : public simple_cal, public scientific_cal
{
public:
    void setdata()
    {
        cout << "Which calculation you want to do?\n";
    start:
        cout << "simple press -->> '1'\tscientific press -->> '2'\texit press -->> 0\n";
        cin >> var[0];
        if (var[0] == 1)
        {
        switch1:
            cout << "press '1' for Sum\npress '2' for Multiplication\n";
            cout << "press '3' for Division\npress '4' for Subtraction\n";
            cout << "press '0' for Exit\n";
            cin >> var[0];
            switch (var[0])
            {
            case 1:
                sum();
                break;
            case 2:
                multiplication();
                break;
            case 3:
                division();
                break;
            case 4:
                subtraction();
                break;
            case 0:
                exit;
                break;
            default:
                cout << "Please enter a valid number\n";
                goto switch1;
                break;
            }
        }
        else if (var[0] == 2)
        {
        switch2:
            cout << "press '1' for Square root\npress '2' for Sin\n";
            cout << "press '3' for Cos\npress '4' for Tan\n";
            cout << "press '5' for Power\npress '6' for Log\n";
            cout << "press '0' for Exit\n";
            cin >> var[0];
            switch (var[0])
            {
            case 1:
                SQUARE_RT();
                break;
            case 2:
                SIN();
                break;
            case 3:
                COS();
                break;
            case 4:
                TAN();
                break;
            case 5:
                POWER();
                break;
            case 6:
                LOG();
                break;
            case 0:
                exit;
                break;
            default:
                cout << ">>>> " << var[0] << " is invalid number <<<<\n\n";
                goto switch2;
                break;
            }
        }
        else if (var[0] == 0)
        {
            exit;
        }
        else
        {
            cout << ">>> Invalid number <<<\n\n";
            goto start;
        }
    }
};
int main()
{
    multiple_inheritance obj;
    obj.setdata();
    return 0;
}
/* create 2 classes
1. simple calculator(2 input,perfomme +-/*)
2. scientific calculator(4 operation of scientific calculation)
create another class "hybridcalculator" and inherit it using these classes
q1. what type of inherit you using
Q2. which mode of inheritance r u using
create obj of hybrid & display result of simple & scientific calculator
how code reuseability implement
*/