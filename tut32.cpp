#include <iostream> // costructor with Default argumnet 
using namespace std;
class simple
{
private:
    int data1, data2, data3;

public:
    void setdata(int x = 1, int y = 2, int z = 3) // Default value of costructor
    {
        data1 = x;
        data2 = y;
        data3 = z;
    }
    void printdata()
    {
        cout << "The value of data1 is: " << data1 << endl;
        cout << "The value of data2 is: " << data2 << endl;
        cout << "The value of data3 is: " << data3 << endl;
    }
};
int main()
{
    simple obj;
    obj.setdata();
    // obj.setdata(11);
    // obj.setdata(11, 12);
    // obj.setdata(11, 12, 13);
    obj.printdata();
    return 0;
}
