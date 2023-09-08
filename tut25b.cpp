/*
Friend function
1. can access private data
2. cannot be called with object which mean c1.setdatabysum() is invalid
3. it input object as input
4. can be declare in private or public section
5. it can't access members directely by there name and need
*/
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatabysum(complex o1, complex o2) // Friend function
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnumber()
    {
        cout << "The  complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printnumber();

    c2.setdata(3, 4);
    c2.printnumber();

    c3.setdatabysum(c1, c2);
    c3.printnumber();
    return 0;
}
