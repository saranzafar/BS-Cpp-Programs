#include <iostream> //  static data member & static function
using namespace std;
class employ
{
private:
    int id;
    static int count; // static data member "count"

public:
    void setdata()
    {
        cout << "enter id of employ: ";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "Employ id is " << id << " and the number of this employ is " << count << endl;
    }
    static void getcount()
    {
        cout << "value of count is: " << count << " \n";
        // static function is only use to print static variable
    }
};
int employ::count = 100; // value of static variable is '0' by defaul.
int main()
{
    employ a, b, c;
    a.setdata();
    a.getdata();
    employ::getcount();

    b.setdata();
    b.getdata();
    employ::getcount();

    c.setdata();
    c.getdata();
    employ::getcount();
    return 0;
}
