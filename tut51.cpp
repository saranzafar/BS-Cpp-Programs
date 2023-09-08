#include <iostream> //pointers to object and arrow operator
using namespace std;
class complex
{
private:
    int imagenary, real;

public:
    void set_data(int a, int b)
    {
        imagenary = a;
        real = b;
    }
    void display_data()
    {
        cout << "Imagenary part is: " << imagenary << endl;
        cout << "Real part is: " << real << endl;
    }
};
int main()
{
    //complex obj;
    //complex *ptr = &obj;
    complex *ptr = new complex;
    // obj.set_data(12, 13);
    // obj.display_data();
    // (*ptr).set_data(6, 7);//this line is same as
    // (*ptr).display_data();
    ptr->set_data(3, 4); // this line and This is arrow operator " -> ".
    ptr->display_data();

    // Arrays of operator
    complex *ptr1 = new complex[3];
    ptr1->set_data(31, 41);
    ptr1->display_data();
    return 0;
}
