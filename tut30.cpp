#include <iostream>// parameterized constructor
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex(int, int); // parameterized constructor
    void display()
    {
        cout << "their value is " << a <<" + "<< b << "i" << endl;
    }
};
complex::complex(int x, int y) // parameterized constructor
{
    a = x;
    b = y;
}
int main()
{
    complex c1(12, 13);           // implicit call
    complex c2 = complex(12, 13); // explicit call
    c1.display();
    c2.display();
    return 0;
}
