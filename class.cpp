#include <iostream>
#include <stdio.h>
using namespace std;
class y;
class x
{
private:
    int a;

public:
    void setvalue(int v1)
    {
        a = v1;
    }
    friend void add(x, y);
};
class y
{
private:
    int b;

public:
    void setvalue2(int v2)
    {
        b = v2;
    }
    friend void add(x, y);
};
void add(x o1, y o2)
{
    cout << "Sum of abjects of two classes is " << o1.a + o2.b;
}
int main(int argc, char const *argv[])
{
    x a1;
    y a2;
    a1.setvalue(32);
    a2.setvalue2(31);
    add(a1, a2);
    return 0;
}
