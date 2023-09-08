#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void setval(int v1)
    {
        val1 = v1;
    };
    void display()
    {
        cout << val1 << endl;
    };
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void setval(int v2)
    {
        val2 = v2;
    };
    void display()
    {
        cout << val2;
    };
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 b1;
    c2 b2;
    b1.setval(12);
    b2.setval(22);
    exchange(b1, b2);
    cout << "value of c1 after exchane become ";
    b1.display();
    cout << "value of c1 after exchane become ";
    b2.display();
    return 0;
}
