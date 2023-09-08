// Function templet overloading
#include <iostream>
using namespace std;
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Harry<T>::display()
{
    cout << data << endl;
}
void func(int a)
{
    cout << "I am first func(): " << a << endl;
}
template <class T>
void func(T a)
{
    cout << "I am templatised func(): " << a << endl;
}
template <class T>
void func1(T a)
{
    cout << "I am templatised func()2: " << a << endl;
}
int main()
{
    // Harry<char> obj('s');
    // cout << obj.data << endl;
    // obj.display();

    func(4);    // exect match takes the higher priority
    func(4.22); // exect match takes the higher priority
    func1(4);   // exect match takes the higher priority
    return 0;
}
