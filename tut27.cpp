#include <iostream> // forward declaration
using namespace std;
class complex;
class calculator
{
public:
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};

class complex
{
private:
    int a, b;
    // 1.
    // friend int calculator ::sumrealcomplex(complex o1, complex o2);
    // friend int calculator ::sumcompcomplex(complex o1, complex o2);
    // 2.
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int calculator::sumcompcomplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}
int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);

    calculator calc;
    int result = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << result << endl;
    int resultc = calc.sumcompcomplex(o1, o2);
    cout << "the sum of complex part of o1 and o2 is " << resultc << endl;
    return 0;
}
