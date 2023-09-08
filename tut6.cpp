#include <iostream>
using namespace std;
int main()
{
    /* ********** refrence variable ********** */
    int a = 3;
    int &b = a;
    cout << "Tha Value of a is " << a << " And value of b is " << b << endl;
    b++;
    cout << "Tha Value of a is " << a << " And value of b is " << b << endl;

    /* ********** Sizeof operator ********** */
    cout << "Size of a is " << sizeof(a) << endl;

    /* ********** Type casting ********** */
    a = 3.14;
    cout << "the value of a is " << float(a);
    return 0;
}