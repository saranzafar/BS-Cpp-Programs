// Class Templets with default parameters
#include <iostream>
using namespace std;
template <class T1 = string, class T2 = int, class T3 = float>
class tut66
{
    T1 email;
    T2 id;
    T3 CGPA;

public:
    tut66(string a, int b, float c)
    {
        email = a;
        id = b;
        CGPA = c;
    }
    void display()
    {
        cout << "\nYour email is: " << email;
        cout << "\nYour email is: " << id;
        cout << "\nYour email is: " << CGPA;
    }
};
int main()
{
    string email;
    int id;
    float CGPA;
    cout << "Enter your email: ";
    cin >> email;
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Enter your CGPA: ";
    cin >> CGPA;
    tut66<> obj(email, id, CGPA); // Default parameters
    obj.display();

    // tut66<int, int, int> obj1(7, 4, 3); // custom parameters
    // but it throw error
    return 0;
}
