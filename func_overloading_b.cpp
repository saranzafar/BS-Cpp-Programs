#include <iostream>
using namespace std;
class function_overloading_b
{
private:
    int a = 0, b = 0;

public:
    void sum()
    {
        cout << "Nothing to sum\n";
    }
    void sum(int &x)
    {
        cout << "value of a is " << x << endl;
        cout << "value of b is 0\n";
    }
    void sum(int &x, int &y)
    {
        cout << "value of a is " << x << endl;
        cout << "value of b is " << y << endl;
    }
};
int main()
{
    int a, b;
    function_overloading_b obj1;
    obj1.sum();
    // obj1.sum(12);
    return 0;
}
