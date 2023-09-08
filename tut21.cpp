#include <iostream>
using namespace std;
class employ
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void gendata(int d, int e)
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};
void employ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employ bridg;
    bridg.d = 7;
    bridg.e = 8;
    bridg.setdata(1, 2, 3);
    bridg.gendata(7,8);
    return 0;
}
