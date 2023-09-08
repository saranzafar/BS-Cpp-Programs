// Templets with Multiple Parameters and Parameters canbe Two or More
#include <iostream>
using namespace std;
template <class T1, class T2>
class myclass
{
public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 << endl
             << data2;
    }
};
int main()
{
    // myclass<char, float> obj('s', 9.4);
    myclass<double, string> obj(3434.443, "Saran zafar");
    obj.display();
    return 0;
}
