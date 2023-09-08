#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;

public:
};
// class derived : base
// class derived :protected base
class derived :public base
{
private:
public:
};
int main()
{
    base b;
    derived d;
    // cout << b.a;//can't directly print
    return 0;
}
/*
visibiity mode for public, private and protected
                            pulic derivation    private derivation   protected derivation
1. private members   -->>   not inherited       not inherited        not inherited
2. protected members -->>   Protected           private              protected
3. public members    -->>   public              private              protected
*/