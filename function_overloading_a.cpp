#include <iostream>
using namespace std;
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
int main()
{
    int a = 10, b = 20;
    sum();
    sum(a);
    return 0;
}
