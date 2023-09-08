#include <iostream>
using namespace std;
class employ
{
private:
    int id;
    int salary;

public:
    void emp_id(void)
    {
        salary = 120;
        cout << "Enter id of employ: \n";
        cin >> id;
    }
    void disp_id(void)
    {
        cout << "ID of employ is " << id << " \n";
        cout << "Salary of employ is " << salary << " \n";
    }
};
int main()
{
    employ idd;
    idd.emp_id();
    idd.disp_id();
    return 0;
}
