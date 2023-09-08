// Templet function with parameters
#include <iostream>
using namespace std;
template <class T1, class T2>
T1 avg(T1 a, T2 b)
{
    T1 c;
    c = (a + b) / 2;
    return c;
}
template <class T>
T swapp(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
    cout << "\nAfter Swaping : A = " << a << " & B = " << b << endl;
    return (a, b);
}
int main()
{
    int a = 12, b = 13;
    cout << endl
         << "Ans: " << avg(3.5, 2); // it gives answer in same datatype in which it takes input
    cout << "\nBefore Swaping : A = " << a << " & B = " << b << endl;
    swapp(a, b);
    return 0;
}
