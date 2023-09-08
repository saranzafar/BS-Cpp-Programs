#include <iostream> //array of object using pointer
using namespace std;
class shopitem
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "Code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};
int main()
{
    // int x[34];//these two lines as same as line no third.
    // *ptr = &x;
    // int *ptr = new int[34]; // compiler allocate storage of 24 integers
    int size = 3;
    int p;
    float q;
    shopitem *ptr = new shopitem[size]; // this line is same as
    shopitem *ptrtemp = ptr;
    // shopitem obj[3];          // this and
    // shopitem *ptr1 = &obj[3]; // this line
    for (int i = 0; i < size; i++)
    {
        cout << "Enter ID and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        cout << "Item number: " << j + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}
