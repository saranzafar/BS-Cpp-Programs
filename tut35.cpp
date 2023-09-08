//***** distructors *****
/* newer take argument nor does it return any value*/
#include <iostream>
using namespace std;
int count = 0;
class num
{
private:
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object no 1\n";
    }
    ~num()
    {
        cout << "This is the time when distructor is called for object\n";
        count--;
    }
};
int main() 
{
    cout << "We are inside the main function\n";
    cout << "Creating first object n1\n";
    num n1;
    {
        cout << "Entering this block\n";
        cout << "Creating two more objects\n";
        num n2, n3;
        cout << "Exiting this block\n";
    }
    cout << "Back to main\n";
    return 0;
}
